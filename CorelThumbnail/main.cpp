 /*
** Copyright (C) http://srgb.googlecode.com  All rights reserved.
*/
#include <iostream>
#include "corel_thumbnail.h"


void helpinfo(const char* exefile)
{
    printf("\nCorelDRAW 缩略图转成PNG图片和检测文档版本工具\n"
           "(C) 版权所有 2013.06 Hongwenjun (蘭公子)\n\n"
           "Usage: %s  <CorelDRAW文件.cdr>  [SavePngFile]\n" , exefile);
}


int main(int argc, char* argv[])
{


    const char* cdr_filename = "test.cdr";
    const char* png_filename = NULL;

    if (argc > 1)
        cdr_filename = argv[1];
    if (argc > 2)
        png_filename = argv[2];

    bool ret =  cdr_thumbnail_png(cdr_filename, png_filename);


    if (!ret) {
        helpinfo(argv[0]);
        return 88;

    }


    return 0;
}