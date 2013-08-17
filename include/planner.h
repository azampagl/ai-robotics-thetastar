/**
 * @package     ThetaStar
 * @author      Aaron Zampaglione <azampagl@azampagl.com>
 * @copyright   Copyright (C) 2013 Aaron Zampaglione
 * @license     MIT
 */
#ifndef THETASTAR_PLANNER_H
#define THETASTAR_PLANNER_H

#include "map.h"

namespace ThetaStar {

class THETASTARSHARED_EXPORT Planner : public QObject
{
      Q_OBJECT
   public:

      Planner();

      ~Planner();
};

}

#endif // THETASTAR_PLANNER_H
