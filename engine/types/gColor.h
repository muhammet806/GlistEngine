/*
 * gColor.h
 *
 *  Created on: May 9, 2020
 *      Author: noyan
 */

#ifndef ENGINE_GRAPHICS_GCOLOR_H_
#define ENGINE_GRAPHICS_GCOLOR_H_


class gColor {
public:
	gColor();
	gColor(float r, float g, float b, float a = 1.0f);
	gColor(gColor* color);
	virtual ~gColor();

	void set(float r, float g, float b, float a = 1.0f);
	void set(int r, int g, int b, int a = 255);
	void set(gColor* color);
	float r, g, b, a;
};

#endif /* ENGINE_GRAPHICS_GCOLOR_H_ */
