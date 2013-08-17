/**
 * @package     thetastar
 * @author      Aaron Zampaglione <azampagl@azampagl.com>
 * @copyright   Copyright (C) 2013 Aaron Zampaglione
 * @license     MIT
 */
#ifndef THETASTAR_GLOBAL_H
#define THETASTAR_GLOBAL_H

#include <QObject>
#include <QtCore/qglobal.h>

#if defined(THETASTAR_LIBRARY)
#  define THETASTARSHARED_EXPORT Q_DECL_EXPORT
#else
#  define THETASTARSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // THETASTAR_GLOBAL_H
