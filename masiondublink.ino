// Déclaration des pins pour les LED optimisée (avancée)
const int ledPins[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
const int numLeds = sizeof(ledPins) / sizeof(ledPins[0]);
// Déclaration des autres leds
int randomLed = 0;
int tempsmini = 30;
int tempsmaxi = 2300;

void setup() {
  // Initialisation des pins des LED en sortie (avancée)
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW);
  }

  // Initialisation du générateur de nombres aléatoires
  randomSeed(analogRead(A0)); 
}

void loop() {
  // Choisit et allume une LED aléatoire
  randomLed = random(0, numLeds);
  digitalWrite(ledPins[randomLed], HIGH);
  // Attend un temps aléatoire
  delay(random(tempsmini, tempsmaxi));

  // Choisit et éteint une LED aléatoire
  randomLed = random(0, numLeds);
  digitalWrite(ledPins[randomLed], LOW);
  // Attend un temps aléatoire
  delay(random(tempsmini, tempsmaxi));
}
