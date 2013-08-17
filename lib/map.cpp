#include "include/map.h"

using namespace ThetaStar;

Map::Map()
{
   qDebug("Map created.");
}

Map::~Map()
{
   qDebug("Deleting a map...");
   destroy();
   qDebug("Map deleted.");
}

Vertex* Map::add(const Coordinate coordinate, const Vertex::Cost cost)
{
   // Don't re-add the same coordinate if it exists already.
   if (_vertices.contains(coordinate))
   {
      qDebug("Coordinate already exists in the vertex map.");
      return NULL;
   }

   // Create the vertex
   Vertex* vertex = new Vertex(coordinate, cost);
   _vertices.insert(coordinate, vertex);

   // Adjust height and width thresholds appropriately.
   _max_width = (coordinate.x > _max_width) ? coordinate.x : _max_width;
   _min_width = (coordinate.x < _min_width) ? coordinate.x : _min_width;
   _max_height = (coordinate.y > _max_height) ? coordinate.y : _max_height;
   _min_height = (coordinate.y < _min_height) ? coordinate.y : _min_height;

   return vertex;
}

bool Map::destroy()
{
   qDebug("Destroying a map...");

   // Only delete vertices is the vertex map is not empty.
   if ( ! _vertices.empty())
   {
      qDebug("Deleting vertices...");
      qDeleteAll(_vertices);
      _vertices.clear();
      qDebug("Vertices deleted.");
   }

   // Reset boundaries.
   _max_height = _max_width = _min_height = _min_width = 0;

   qDebug("Map destroyed.");
   return true;
}

bool Map::init()
{
   // Init must first destroy the current map.
   return destroy();
}

Vertex* Map::find(const Coordinate coordinate) const
{
   // Find the vertex based on the coordinate.
   VertexMap::const_iterator result = _vertices.find(coordinate);

   // If no vertex was found, return NULL.
   return result == _vertices.end() ? NULL : result.value();
}

Coordinate::Type Map::height() const
{
   return _max_width - _min_width;
}

Coordinate::Type Map::width() const
{
   return _max_width - _min_width;
}
