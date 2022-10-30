#include <LovyanGFX.hpp>
#include <lvgl.h>




   static void networkConnector();
   static void networkScanner();
   static void scanWIFITask(void *pvParameters);
   static void timerForNetwork(lv_timer_t *timer);
   static void showingFoundWiFiList();

   void updateLocalTime();
   void  tryPreviousNetwork();
   void loadWIFICredentialEEPROM();
   void beginWIFITask(void *pvParameters);