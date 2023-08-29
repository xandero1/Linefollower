# Gebruiksaanwijzing

### opladen / vervangen batterijen
De batterijen worden opgeladen via een specifieke Li-ion batterij lader.
 ![image](https://github.com/xandero1/Linefollower/assets/116888860/4597830a-943f-47fc-936d-200a9baeeb70)

### draadloze communicatie
#### verbinding maken
Je maakt verbinding via een bluetooth verbinding met de HC-05 module en de parameters stuur je door via de Serial Bluetooth Terminal app op je smartphone.

#### commando's
	“run” => Starten met rijden (dit kan ook met de knop gedaan worden)
	“stop” => Stoppen met rijden
	“debug” => Tonen van de ingestelde parameters met de waarden
	“calibrate” => Calibreren van de sensoren
	“set cycle ‘waarde’ ” => Set cycle naar ‘waarde’ (waarde moet cijfer zijn)
	“set power ‘waarde’ ” => Set power naar ‘waarde’ (waarde moet cijfer zijn)
	“set diff ‘waarde’ ” => Set diff naar ‘waarde’ (waarde moet cijfer zijn)
	“set kp ‘waarde’ ” => Set kp naar ‘waarde’ (waarde moet cijfer zijn)
	“set ki ‘waarde’ ” => Set ki naar ‘waarde’ (waarde moet cijfer zijn)
	“set kd ‘waarde’ ” => Set kd naar ‘waarde’ (waarde moet cijfer zijn)

### kalibratie
Voor de sensoren te kalibreren moet er in de seriële monitor via de computer of bluetooth module het commando “calibrate white” of “calibrate black” worden getypt. Indien het commando is doorgestuurd zal deze de waarden opslaan. Zorg er wel voor dat de line follower op een volledige witte ondergrond staat om de witte waarden op te slaan en bij de zwarte waarden op een volledige zwarte ondergrond.  

### settings
De robot rijdt stabiel met volgende parameters:  
Power= 10/ diff= 0,05/ kp= 0,5/ ki= 0/ kd= 0,05
### start/stop button
De drukknop die op het protype bordje is gemonteerd zorgt ervoor dat de wagen in “Run” stand wordt gebracht of in “Niet RUN”.
![image](https://github.com/xandero1/Linefollower/assets/116888860/45cda037-c98b-4b76-b3f8-816bd06362bf)

