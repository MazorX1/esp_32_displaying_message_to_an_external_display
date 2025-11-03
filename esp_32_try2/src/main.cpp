#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define OLED_SDA 21
#define OLED_SCL 22
#define OLED_ADDR 0x3C
#define OLED_RESET -1

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  Wire.begin(OLED_SDA, OLED_SCL);  // Explicitly define SDA and SCL pins
  Serial.begin(115200);
  Serial.println("Initializing OLED...");

  if (!display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR)) {
    Serial.println(F("SSD1306 initialization failed"));
    for (;;);
  }

  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(1, 1);

  display.println("gandu");
  display.display();


}

void loop() {
  // Nothing here yet
}
