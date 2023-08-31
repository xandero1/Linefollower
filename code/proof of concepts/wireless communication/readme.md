# draadloze communicatie proof of concept
minimale hard- en software waarmee aangetoond wordt dat duplex kan gecommuniceerd worden tussen de microcontroller en een [laptop|smartphone] (schappen wat niet past), gebruik makend van [programma] (in te vullen)
<br />
### configuratie
De Aruino nano en de HC-05 module aansluiten zoals aangegeven in het elektronische schema. Vervolgens de app 'Serial Bluetooth Terminal' downloaden en installeren op de smartphone. Hierna moet u de smartphone verbinden met de HC-05 module via bluetooth. Dan is er communicatie mogelijk tussen de Arduino en Smartphone.
### opmerkingen
Om nieuwe code te uploaden naar de Arduino moet de HC-05 module worden losgekoppelt.
### gebruiksaanwijzing
 Er zijn 3 geprogrameerde commando's. Het sturen van een '0' zal de led doen doven, '1' zal de led doen branden en '2' zal de led doen knipperen
