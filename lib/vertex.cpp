#include "include/vertex.h"

using namespace ThetaStar;

const Vertex::Cost Vertex::MAX_COST = DBL_MAX;
const unsigned int Vertex::MAX_NEIGHBORS = 8;
const Vertex::Cost Vertex::MIN_COST = -DBL_MAX;

Vertex::~Vertex()
{
    // Do nothing.
}

