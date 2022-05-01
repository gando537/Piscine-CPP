/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:59:37 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/04 18:37:42 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

// inline float sign(Point p1, Point p2, Point p3)
// {
// 	return (p1.getPointX().toFloat() - p3.getPointX().toFloat())
//         * (p2.getPointY().toFloat() - p3.getPointY().toFloat()) 
//         - (p2.getPointX().toFloat() - p3.getPointX().toFloat()) 
//         * (p1.getPointY().toFloat() - p3.getPointY().toFloat());
// }

// bool bsp(Point const a, Point const b, Point const c, Point const p)
// {
// 	float d1 = sign(p, a, b);
// 	float d2 = sign(p, b, c);
// 	float d3 = sign(p, c, a);

// 	bool has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
// 	bool has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

// 	return !(has_neg && has_pos);
// }

bool bsp(Point const a, Point const b, Point const c, Point const p)
{
    int as_x = p.getPointX().toInt() - a.getPointX().toInt();
    int as_y = p.getPointY().toInt() - a.getPointY().toInt();

    bool s_ab = (b.getPointX().toInt() - a.getPointX().toInt()) * as_y - (b.getPointY().toInt() - a.getPointY().toInt()) * as_x > 0;

    if((c.getPointX().toInt() - a.getPointX().toInt()) * as_y - (c.getPointY().toInt()- a.getPointY().toInt()) * as_x > 0 == s_ab) 
        return false;

    if((c.getPointX().toInt() - b.getPointX().toInt()) * (p.getPointY().toInt() - b.getPointY().toInt()) - (c.getPointY().toInt() - b.getPointY().toInt()) * (p.getPointX().toInt() - b.getPointX().toInt()) > 0 != s_ab) 
        return false;

    return true;
}

bool intpoint_inside_trigon(intPoint s, intPoint a, intPoint b, intPoint c)
{
    int as_x = s.x-a.x;
    int as_y = s.y-a.y;

    bool s_ab = (b.x-a.x)*as_y-(b.y-a.y)*as_x > 0;

    if((c.x-a.x)*as_y-(c.y-a.y)*as_x > 0 == s_ab) return false;

    if((c.x-b.x)*(s.y-b.y)-(c.y-b.y)*(s.x-b.x) > 0 != s_ab) return false;

    return true;
}
