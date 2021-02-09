/*
 * Luftschloss - A text editor
 * Copyright (c) 2021 Skyler Burwell
 * 
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 * 
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 * 
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 */

#ifndef __LUFTSCHLOSS_BUFFER_HPP__
#define __LUFTSCHLOSS_BUFFER_HPP__

#include "vstring.hpp"

#include <vector>

class Buffer;

class Line {
public:
    keep String str() const;

public:
    friend class Buffer;
    
    String _str;
    uchar *_hl;
};

class Buffer {
public:
    Buffer(String filename);
    
    keep size_t lineCount() const;
    keep Line *line(size_t idx) const;
    
    void append();
    
private:
    void open();
    
    String _filename;
    std::vector<Line*> _lines;
    size_t _lineCount;
};


#endif //__LUFTSCHLOSS_BUFFER_HPP__
