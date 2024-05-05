This exercise is taken from the book “Opus Magnum C++11” by J. Grebosz, as far as I know there is no English version. In his book author suggests using Polish variable names, so I did. Comments are also in Polish. 

 

The complete list of exercises can be found on author website: 

https://ifj.edu.pl/private/grebosz/opus_php/wybor_rozdzialu.php 


*********************************************************


Napisz funkcję, która wywoływana jest z dwoma argumentami.  Pierwszy to wskaźnik do
tablicy znaków, w której  jest już jakiś C-string. Drugi to rozmiar tej tablicy. Funkcja  ta
ma do początku bieżącej treści tablicy znaków  dopisać tekst "UWAGA: ".  
Jeśli w rezultacie powstałby C-string dłuższy,  niż na to pozwala obecny rozmiar tablicy znaków,
niech trzy  ostatnie możliwe znaki zostaną zastąpione trzema kropkami.  
Jako rezultat swej pracy funkcja ta ma zwracać wskaźnik  do tablicy znaków, na której dokonała
zmiany.  
