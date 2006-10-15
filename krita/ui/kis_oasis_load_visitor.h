/*
 *  Copyright (c) 2006 Cyrille Berger <cberger@cberger.net>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */
#ifndef KIS_OASIS_LOAD_VISITOR_H_
#define KIS_OASIS_LOAD_VISITOR_H_

#include "kis_global.h"
#include "kis_types.h"

class QDomElement;
class KisPaintLayer;
class KisGroupLayer;
class KisAdjustmentLayer;
class KisDoc;

class KisOasisLoadVisitor {
public:
    KisOasisLoadVisitor(KisDoc* doc) : m_doc(doc) {};
    virtual ~KisOasisLoadVisitor() {};

public:
    KisImageSP loadImage(const QDomElement& elem);
    void loadPaintLayer(const QDomElement& elem, KisPaintLayerSP pL);
    void loadGroupLayer(const QDomElement& elem, KisGroupLayerSP gL);
private:
    void loadLayerInfo(const QDomElement& elem, KisLayer* layer);
    KisImageSP m_image;
    KisDoc* m_doc;
};


#endif // KIS_LAYER_VISITOR_H_

