/**
 *
 * @package    ThetaStar
 * @author     Aaron Zampaglione <azampagl@azampagl.com>
 * @copyright  Copyright (C) 2013 Aaron Zampaglione
 * @license    MIT
 */
#ifndef THETASTAR_MAP_H
#define THETASTAR_MAP_H

#include <QMap>

#include "vertex.h"

namespace ThetaStar {

typedef QMap<Coordinate, Vertex*> VertexMap;

class THETASTARSHARED_EXPORT Map : public QObject
{
      Q_OBJECT

   public:
      Map();

      ~Map();

      Vertex* add(const Coordinate coordinate, const Vertex::Cost cost);

      bool destroy();

      bool init();

      Vertex* find(const Coordinate coordinate) const;

      Coordinate::Type height() const;

      Coordinate::Type width() const;

   private:
      Coordinate::Type _max_height;

      Coordinate::Type _max_width;

      Coordinate::Type _min_height;

      Coordinate::Type _min_width;

      VertexMap _vertices;
};

}

#endif // THETASTAR_MAP_H
