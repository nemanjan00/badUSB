#include "Keyboard.h"

void typeKey(uint8_t key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream

  Keyboard.begin();

  delay(4000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');

  Keyboard.releaseAll();

  delay(1000);

  Keyboard.print("shutdown -s -f -t 0");

  typeKey(KEY_RETURN);

  delay(400);
  
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
