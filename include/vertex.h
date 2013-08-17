/**
 * @package     ThetaStar
 * @author      Aaron Zampaglione <azampagl@azampagl.com>
 * @copyright   Copyright (C) 2013 Aaron Zampaglione
 * @license     MIT
 */
#ifndef THETASTAR_VERTEX_H
#define THETASTAR_VERTEX_H

#include <cfloat>

#include "coordinate.h"

namespace ThetaStar {

class THETASTARSHARED_EXPORT Vertex
{
public:
    typedef double Cost;

    static const Cost MAX_COST;
    static const unsigned int MAX_NEIGHBORS;
    static const Cost MIN_COST;

    Vertex(const Coordinate coordinate, const Cost cost) :
        _coordinate(coordinate),
        _cost(cost),
        _g(MIN_COST),
        _h(MIN_COST) {}

    ~Vertex();

    inline Cost g() const {return _g;}

    inline Cost h() const {return _h;}

private:
    Coordinate _coordinate;

    Cost _cost;

    Cost _g;

    Cost _h;
};

}

#endif // THETASTAR_VERTEX_H
