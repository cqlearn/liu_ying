#include "my_gui.h"
#include "lvgl.h"
#include <stdio.h>

LV_IMG_DECLARE(liu_ying);                               /* 声明图片源 */

void my_gui(void)
{
    lv_obj_t *img = lv_img_create(lv_scr_act());        /* 创建图片部件 */
    lv_img_set_src(img,&liu_ying);

    lv_obj_center(img);

    //设置图片偏移
//    lv_img_set_offset_x(img,100);
//    lv_img_set_offset_y(img,20);

    //图片重新着色
//    lv_obj_set_style_img_recolor(img,lv_color_hex(0xffe1d2),LV_PART_MAIN);
//    lv_obj_set_style_img_recolor_opa(img,150,LV_PART_MAIN);

    //设置图片缩放，旋转
//    lv_img_set_zoom(img,512);   //放大两倍
//    lv_img_set_angle(img,900);  //顺时针旋转90°

    //设置中心点
//    lv_obj_update_layout(img);      //更新图片布局信息
//    lv_img_set_pivot(img,0,0);
}
