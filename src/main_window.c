#include <pebble.h>
#include "main_window.h"
  
static PropertyAnimation *s_property_animation;
static char tens[] = "5";
static char ones[] = "0";
static char deci[] = "0";
static char reslt[9] = "30,00";

// BEGIN AUTO-GENERATED UI CODE; DO NOT MODIFY
static Window *s_window;
static GFont s_res_gothic_24_bold;
static GFont s_res_gothic_18;
static GFont s_res_gothic_18_bold;
static GBitmap *s_res_ico_up;
static GBitmap *s_res_ico_right;
static GBitmap *s_res_ico_down;
static TextLayer *s_textlayer_res;
static TextLayer *s_textlayer_4;
static TextLayer *s_textlayer_3;
static TextLayer *s_textlayer_2;
static TextLayer *s_textlayer_1;
static TextLayer *s_textlayer_tens;
static TextLayer *s_textlayer_deci;
static TextLayer *s_textlayer_ones;
static TextLayer *s_textlayer_7;
static TextLayer *s_textlayer_underline;
static ActionBarLayer *s_actionbarlayer_1;

static void initialise_ui(void) {
  s_window = window_create();
  window_set_background_color(s_window, GColorBlack);
  #ifndef PBL_SDK_3
    window_set_fullscreen(s_window, 0);
  #endif
  
  s_res_gothic_24_bold = fonts_get_system_font(FONT_KEY_GOTHIC_24_BOLD);
  s_res_gothic_18 = fonts_get_system_font(FONT_KEY_GOTHIC_18);
  s_res_gothic_18_bold = fonts_get_system_font(FONT_KEY_GOTHIC_18_BOLD);
  s_res_ico_up = gbitmap_create_with_resource(RESOURCE_ID_ico_up);
  s_res_ico_right = gbitmap_create_with_resource(RESOURCE_ID_ico_right);
  s_res_ico_down = gbitmap_create_with_resource(RESOURCE_ID_ico_down);
  // s_textlayer_res
  s_textlayer_res = text_layer_create(GRect(-19, 117, 91, 25));
  text_layer_set_background_color(s_textlayer_res, GColorClear);
  text_layer_set_text_color(s_textlayer_res, GColorWhite);
  text_layer_set_text(s_textlayer_res, "30,00");
  text_layer_set_text_alignment(s_textlayer_res, GTextAlignmentRight);
  text_layer_set_font(s_textlayer_res, s_res_gothic_24_bold);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_res);
  
  // s_textlayer_4
  s_textlayer_4 = text_layer_create(GRect(74, 120, 47, 20));
  text_layer_set_background_color(s_textlayer_4, GColorClear);
  text_layer_set_text_color(s_textlayer_4, GColorWhite);
  text_layer_set_text(s_textlayer_4, "g.");
  text_layer_set_font(s_textlayer_4, s_res_gothic_18);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_4);
  
  // s_textlayer_3
  s_textlayer_3 = text_layer_create(GRect(4, 47, 115, 74));
  text_layer_set_background_color(s_textlayer_3, GColorClear);
  text_layer_set_text_color(s_textlayer_3, GColorWhite);
  text_layer_set_text(s_textlayer_3, "of carbohydrates. One unit (15g) of carbohydrates is contained in");
  text_layer_set_font(s_textlayer_3, s_res_gothic_18);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_3);
  
  // s_textlayer_2
  s_textlayer_2 = text_layer_create(GRect(88, 28, 23, 22));
  text_layer_set_background_color(s_textlayer_2, GColorClear);
  text_layer_set_text_color(s_textlayer_2, GColorWhite);
  text_layer_set_text(s_textlayer_2, "g");
  text_layer_set_font(s_textlayer_2, s_res_gothic_18);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_2);
  
  // s_textlayer_1
  s_textlayer_1 = text_layer_create(GRect(4, 8, 117, 49));
  text_layer_set_background_color(s_textlayer_1, GColorClear);
  text_layer_set_text_color(s_textlayer_1, GColorWhite);
  text_layer_set_text(s_textlayer_1, "100g of this food contains");
  text_layer_set_font(s_textlayer_1, s_res_gothic_18);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_1);
  
  // s_textlayer_tens
  s_textlayer_tens = text_layer_create(GRect(55, 28, 10, 20));
  text_layer_set_background_color(s_textlayer_tens, GColorClear);
  text_layer_set_text_color(s_textlayer_tens, GColorWhite);
  text_layer_set_text(s_textlayer_tens, "5");
  text_layer_set_text_alignment(s_textlayer_tens, GTextAlignmentRight);
  text_layer_set_font(s_textlayer_tens, s_res_gothic_18_bold);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_tens);
  
  // s_textlayer_deci
  s_textlayer_deci = text_layer_create(GRect(76, 28, 10, 20));
  text_layer_set_background_color(s_textlayer_deci, GColorClear);
  text_layer_set_text_color(s_textlayer_deci, GColorWhite);
  text_layer_set_text(s_textlayer_deci, "0");
  text_layer_set_font(s_textlayer_deci, s_res_gothic_18_bold);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_deci);
  
  // s_textlayer_ones
  s_textlayer_ones = text_layer_create(GRect(65, 28, 10, 20));
  text_layer_set_background_color(s_textlayer_ones, GColorClear);
  text_layer_set_text_color(s_textlayer_ones, GColorWhite);
  text_layer_set_text(s_textlayer_ones, "0");
  text_layer_set_font(s_textlayer_ones, s_res_gothic_18_bold);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_ones);
  
  // s_textlayer_7
  s_textlayer_7 = text_layer_create(GRect(72, 28, 5, 20));
  text_layer_set_background_color(s_textlayer_7, GColorClear);
  text_layer_set_text_color(s_textlayer_7, GColorWhite);
  text_layer_set_text(s_textlayer_7, ",");
  text_layer_set_font(s_textlayer_7, s_res_gothic_18_bold);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_7);
  
  // s_textlayer_underline
  s_textlayer_underline = text_layer_create(GRect(56, 31, 11, 24));
  text_layer_set_background_color(s_textlayer_underline, GColorClear);
  text_layer_set_text_color(s_textlayer_underline, GColorWhite);
  text_layer_set_text(s_textlayer_underline, "_");
  text_layer_set_text_alignment(s_textlayer_underline, GTextAlignmentCenter);
  text_layer_set_font(s_textlayer_underline, s_res_gothic_18);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_underline);
  
  // s_actionbarlayer_1
  s_actionbarlayer_1 = action_bar_layer_create();
  action_bar_layer_add_to_window(s_actionbarlayer_1, s_window);
  action_bar_layer_set_background_color(s_actionbarlayer_1, GColorClear);
  action_bar_layer_set_icon(s_actionbarlayer_1, BUTTON_ID_UP, s_res_ico_up);
  action_bar_layer_set_icon(s_actionbarlayer_1, BUTTON_ID_SELECT, s_res_ico_right);
  action_bar_layer_set_icon(s_actionbarlayer_1, BUTTON_ID_DOWN, s_res_ico_down);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_actionbarlayer_1);
}

static void destroy_ui(void) {
  window_destroy(s_window);
  text_layer_destroy(s_textlayer_res);
  text_layer_destroy(s_textlayer_4);
  text_layer_destroy(s_textlayer_3);
  text_layer_destroy(s_textlayer_2);
  text_layer_destroy(s_textlayer_1);
  text_layer_destroy(s_textlayer_tens);
  text_layer_destroy(s_textlayer_deci);
  text_layer_destroy(s_textlayer_ones);
  text_layer_destroy(s_textlayer_7);
  text_layer_destroy(s_textlayer_underline);
  action_bar_layer_destroy(s_actionbarlayer_1);
  gbitmap_destroy(s_res_ico_up);
  gbitmap_destroy(s_res_ico_right);
  gbitmap_destroy(s_res_ico_down);
}
// END AUTO-GENERATED UI CODE

static void handle_window_unload(Window* window) {
  destroy_ui();
}

void show_main_window(void) {
  initialise_ui();
  window_set_window_handlers(s_window, (WindowHandlers) {
    .unload = handle_window_unload,
  });
  window_stack_push(s_window, true);
}

void hide_main_window(void) {
  window_stack_remove(s_window, true);
}

// calculator
static void calculate(){
  if (atoi(tens)== 0 && atoi(ones)==0 && atoi(deci)==0) {
    snprintf(reslt,sizeof(reslt),"-");
  }
  else {
    float res = (float)1500/((float)10*atoi(tens)+(float)atoi(ones)+(float)atoi(deci)/10);
    snprintf(reslt, sizeof(reslt), "%d,%02d", (int)res, (int)(res*100)%100);
  }
  text_layer_set_text(s_textlayer_res, reslt);
}

// CLICK HANDLERS
static void select_click_handler(ClickRecognizerRef recognizer, void *context) {
  APP_LOG(APP_LOG_LEVEL_DEBUG, "Select");
  // select will move edited digit field mark: x= 56 -> 64 -> 74 -> 56 ...  
  GRect frame = layer_get_frame((Layer *)s_textlayer_underline);
  GRect to_frame;
  if (frame.origin.x == 56) {
    to_frame = GRect(64, 31, 11, 24);
  }
  else if (frame.origin.x == 64) {
    to_frame = GRect(74, 31, 11, 24);
  }
  else {
    to_frame = GRect(56, 31, 11, 24);
  }
  // Create the animation
  s_property_animation = property_animation_create_layer_frame((Layer *)s_textlayer_underline, &frame, &to_frame);

  // Schedule to occur ASAP with default settings
  animation_schedule((Animation*) s_property_animation);
}

static void up_click_handler(ClickRecognizerRef recognizer, void *context) {
  APP_LOG(APP_LOG_LEVEL_DEBUG, "up");
  // up will increment selected field
  if (layer_get_frame((Layer *)s_textlayer_underline).origin.x == 56){
    int val = atoi(tens);
    val++;
    if (val == 10) val = 0;
    snprintf(tens,2,"%i",val);
    text_layer_set_text(s_textlayer_tens, tens);
  }
  else if (layer_get_frame((Layer *)s_textlayer_underline).origin.x == 64){
    int val = atoi(ones);
    val++;
    if (val == 10) val = 0;
    snprintf(ones,2,"%i",val);
    text_layer_set_text(s_textlayer_ones, ones);
  }
  else {
    int val = atoi(deci);
    val++;
    if (val == 10) val = 0;
    snprintf(deci,2,"%i",val);
    text_layer_set_text(s_textlayer_deci, deci);
  }
  calculate();
}

static void down_click_handler(ClickRecognizerRef recognizer, void *context) {
  APP_LOG(APP_LOG_LEVEL_DEBUG, "down");
   // down will decrement selected field
  if (layer_get_frame((Layer *)s_textlayer_underline).origin.x == 56){
    int val = atoi(tens);
    val--;
    if (val == -1) val = 9;
    snprintf(tens,2,"%i",val);
    text_layer_set_text(s_textlayer_tens, tens);
  }
  else if (layer_get_frame((Layer *)s_textlayer_underline).origin.x == 64){
    int val = atoi(ones);
    val--;
    if (val == -1) val = 9;
    snprintf(ones,2,"%i",val);
    text_layer_set_text(s_textlayer_ones, ones);
  }
  else {
    int val = atoi(deci);
    val--;
    if (val == -1) val = 9;
    snprintf(deci,2,"%i",val);
    text_layer_set_text(s_textlayer_deci, deci);
  }
  calculate();
}

static void up_long_click_handler(ClickRecognizerRef recognizer, void *context) {
  APP_LOG(APP_LOG_LEVEL_DEBUG, "up long");
  // long up will increment by 3 selected field
  if (layer_get_frame((Layer *)s_textlayer_underline).origin.x == 56){
    int val = atoi(tens);
    val=val+3;
    if (val > 9) val = val - 10;
    snprintf(tens,2,"%i",val);
    text_layer_set_text(s_textlayer_tens, tens);
  }
  else if (layer_get_frame((Layer *)s_textlayer_underline).origin.x == 64){
    int val = atoi(ones);
    val=val+3;
    if (val > 9) val = val - 10;
    snprintf(ones,2,"%i",val);
    text_layer_set_text(s_textlayer_ones, ones);
  }
  else {
    int val = atoi(deci);
    val=val+3;
    if (val > 9) val = val - 10;
    snprintf(deci,2,"%i",val);
    text_layer_set_text(s_textlayer_deci, deci);
  }
  calculate();
}

static void up_long_click_release_handler(ClickRecognizerRef recognizer, void *context) {
  APP_LOG(APP_LOG_LEVEL_DEBUG, "up long release");
}

static void down_long_click_handler(ClickRecognizerRef recognizer, void *context) {
  printf("down long");
  // long down will decrement by 3 selected field
  if (layer_get_frame((Layer *)s_textlayer_underline).origin.x == 56){
    int val = atoi(tens);
    val=val-3;
    if (val < 0) val = val + 10;
    snprintf(tens,2,"%i",val);
    text_layer_set_text(s_textlayer_tens, tens);
  }
  else if (layer_get_frame((Layer *)s_textlayer_underline).origin.x == 64){
    int val = atoi(ones);
    val=val-3;
    if (val < 0) val = val + 10;
    snprintf(ones,2,"%i",val);
    text_layer_set_text(s_textlayer_ones, ones);
  }
  else {
    int val = atoi(deci);
    val=val-3;
    if (val < 0) val = val + 10;
    snprintf(deci,2,"%i",val);
    text_layer_set_text(s_textlayer_deci, deci);
  }
  calculate();
}

static void down_long_click_release_handler(ClickRecognizerRef recognizer, void *context) {
  APP_LOG(APP_LOG_LEVEL_DEBUG, "down log release");
}

static void click_config_provider(void *context) {
  window_single_click_subscribe(BUTTON_ID_SELECT, select_click_handler);
  window_single_click_subscribe(BUTTON_ID_UP, up_click_handler);
  window_single_click_subscribe(BUTTON_ID_DOWN, down_click_handler);
  
  window_long_click_subscribe(BUTTON_ID_UP, 700, up_long_click_handler, up_long_click_release_handler);
  window_long_click_subscribe(BUTTON_ID_DOWN, 700, down_long_click_handler, down_long_click_release_handler);
}


// ENTRY POINT
int main(void) {
  show_main_window();
  #ifdef PBL_COLOR
    window_set_background_color(s_window, GColorOxfordBlue);
  #endif
  window_set_click_config_provider(s_window, click_config_provider);
  app_event_loop();
  hide_main_window();
}
