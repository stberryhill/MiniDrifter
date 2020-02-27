#ifndef MINI_DRIFTER_ICONS_H
#define MINI_DRIFTER_ICONS_H

const int NO_SD_ICON_WIDTH = 128;
const int NO_SD_ICON_HEIGHT = 96;

const unsigned char NO_SD_ICON_BYTES[1536] = {
  0x00, 0x01, 0xff, 0xff, 0xf8, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 
  0x00, 0x03, 0xff, 0xff, 0xf8, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 
  0x00, 0x07, 0xff, 0xff, 0xfc, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 
  0x00, 0x0f, 0xff, 0xff, 0xfc, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 
  0x00, 0x1f, 0x00, 0x00, 0x0f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0x00, 0x3e, 0x00, 0x00, 0x07, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0x00, 0x7c, 0x00, 0x00, 0x07, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0x00, 0xf8, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0x07, 0xc0, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0x0f, 0x80, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0x1f, 0x00, 0x7f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0x3e, 0x00, 0x7f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0x7c, 0x00, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf8, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x7c, 0x7f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x3c, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x3c, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x7c, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf9, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf1, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc7, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x01, 0xc7, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x01, 0xc3, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x01, 0xc3, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x01, 0xc3, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x01, 0xc3, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xfd, 0xc3, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xfd, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfd, 0xc7, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xfd, 0xcf, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xcf, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x3d, 0xcf, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x3d, 0xdf, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x3d, 0xdf, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x3d, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x7d, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfd, 0xfd, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf9, 0xfd, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0xfd, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf9, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3b, 0xfc, 0x31, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xfc, 0x01, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xfc, 0x01, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3b, 0xfc, 0x01, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x10, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x90, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x60, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x03, 0xf0, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0xf4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x97, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0xf7, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x37, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x01, 0xf7, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x01, 0xf4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xf8, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 
  0xff, 0xff, 0xff, 0xfe, 0x07, 0xfe, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 
  0xff, 0xff, 0xff, 0xfe, 0x07, 0xfe, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 
  0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe
};

const int BATTERY_ICON_WIDTH = 128;
const int BATTERY_ICON_HEIGHT = 96;

const unsigned char BATTERY_ICON_BYTES[1536] = {
  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 
  0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 
  0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 
  0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 
  0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 
  0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 
  0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 
  0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 
  0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 
  0x07, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xc0, 
  0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0, 
  0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0, 
  0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf8, 
  0x7f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 
  0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfe, 
  0xfd, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x7e, 
  0xf9, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x01, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x03, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x03, 0xf8, 0x00, 0x00, 0x01, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x01, 0xf8, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0xfc, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0xfe, 0x00, 0x00, 0x03, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x7f, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x3f, 0x80, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x1f, 0xc0, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x0f, 0xc0, 0x00, 0x03, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x07, 0xe0, 0x00, 0x03, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x07, 0xf0, 0x00, 0x03, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x03, 0xf8, 0x00, 0x03, 0xef, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x01, 0xfc, 0x00, 0x03, 0xe7, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0xfc, 0x00, 0x03, 0xe3, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x7e, 0x00, 0x03, 0xe1, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x7f, 0x00, 0x03, 0xe0, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x3f, 0x80, 0x03, 0xe0, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x1f, 0xc0, 0x03, 0xe0, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x0f, 0xe0, 0x03, 0xe0, 0x3f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x07, 0xe0, 0x03, 0xe0, 0x1f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x03, 0xf0, 0x03, 0xe0, 0x0f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x03, 0xf8, 0x03, 0xe0, 0x07, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x01, 0xfc, 0x03, 0xe0, 0x03, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x00, 0xfe, 0x03, 0xe0, 0x01, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x00, 0x7f, 0x03, 0xe0, 0x00, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x00, 0x3f, 0x03, 0xe0, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x00, 0x1f, 0x83, 0xe0, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x00, 0x1f, 0xc3, 0xe0, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x00, 0x0f, 0xe3, 0xe0, 0x00, 0x1f, 0xc0, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x00, 0x07, 0xf3, 0xe0, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x00, 0x03, 0xf3, 0xe0, 0x00, 0x07, 0xf0, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x00, 0x01, 0xfb, 0xe0, 0x00, 0x03, 0xf8, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x00, 0x01, 0xff, 0xe0, 0x00, 0x01, 0xfc, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xe0, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0x1f, 0xc0, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc0, 0x00, 0x00, 0x01, 0xc0, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x01, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x1f, 0x3e, 
  0xf9, 0xf0, 0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x1f, 0x3e, 
  0xfd, 0xf0, 0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x1f, 0x7e, 
  0xff, 0xf0, 0x7f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x1f, 0xfe, 
  0x7f, 0xf0, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x1f, 0xfc, 
  0x3f, 0xf0, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x1f, 0xf8, 
  0x1f, 0xf0, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x1f, 0xf0, 
  0x0f, 0xf0, 0x7f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x1f, 0xe0, 
  0x07, 0xf0, 0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x1f, 0xc0, 
  0x01, 0xf0, 0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x1f, 0x00, 
  0x01, 0xf0, 0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x1f, 0x00, 
  0x01, 0xf0, 0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x1f, 0x00, 
  0x01, 0xf0, 0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x1f, 0x00, 
  0x01, 0xf0, 0x01, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x1f, 0x00, 
  0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 
  0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 
  0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 
  0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00
};

bool icon_pixelIsOn(const unsigned char *iconBytes, const int iconWidth, const int iconHeight, int x, int y) {
  if (x >= iconWidth || y >= iconHeight || x < 0 || y < 0) {
    return false;
  }
  
  const int widthBytes = iconWidth >> 3;
  const int bitShift = 7 - (x % 8);
  
  return iconBytes[((y*widthBytes)) + (x >> 3)] & (1 << bitShift);
}
#endif