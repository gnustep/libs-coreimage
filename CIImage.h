
/* 
   CIImage.h

   Copyright (C) 2013 Free Software Foundation, Inc.

   Author: Gregory Casamento <greg.casamento@gmail.com>
   Date: June 3, 2013

   This file is part of CoreImage.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with this library; see the file COPYING.LIB.
   If not, see <http://www.gnu.org/licenses/> or write to the
   Free Software Foundation, 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.
*/

+ (CIImage *)emptyImage;

+ (CIImage *)imageWithBitmapData:(NSData *)data
                     bytesPerRow:(size_t)bpr 
			    size:(CGSize)size 
	                  format:(CIFormat)f 
		      colorSpace:(CGColorSpaceRef)cs;

+ (CIImage *)imageWithCGImage:(CGImageRef)image;

+ (CIImage *)imageWithCGImage:(CGImageRef)image 
                      options:(NSDictionary *)dict;

+ (CIImage *)imageWithCGLayer:(CGLayerRef)layer;

+ (CIImage *)imageWithCGLayer:(CGLayerRef)layer options:(NSDictionary *)d;

+ (CIImage *)imageWithColor:(CIColor *)color;

+ (CIImage *)imageWithContentsOfURL:(NSURL *)url options:(NSDictionary *)d;

+ (CIImage *)imageWithCVImageBuffer:(CVImageBufferRef)imageBuffer;

+ (CIImage *)imageWithCVImageBuffer:(CVImageBufferRef)imageBuffer 
			    options:(NSDictionary *)dict;

