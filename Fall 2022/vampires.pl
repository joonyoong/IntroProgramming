sire(alice,amber).
sire(alice,ambrosia).
sire(alice,bianca).
sire(emmett,celeste).
sire(emmett,drusilla).
sire(emmett,esme).
sire(victoria,lucinda).
sire(thana,tatiana).
sire(claudia,thana).
sire(claudia,victoria).
sire(bartholomew,alice).
sire(bartholomew,cassius).
sire(claudia,emmett).
sire(alice,felix).
sire(hunter,bartholomew).
sire(hunter,jasper).
sire(jasper,lazarus).
sire(jasper,louis).
sire(jasper,claudia).
sire(lazarus,magnus).
sire(lazarus,nikolas).
sire(louis,orpheus).
sire(louis,silas).
sire(bartholomew,talon).
sire(bartholomew,xander).

sibling(X,Y) :- sire(Z,X), sire(Z,Y), X\==Y.
grandsire(X,Y) :- sire(X,Z),sire(Z,Y).
auntuncle(X,Y) :- sibling(X,Y),sire(Y,Z).
grandchildren(X,Z) :- sire(X,Y), sire(X,Z),Y\=Z.
counsins(X,Y) :- auntuncle(X,Y),sire(X,Z), X\=Y.
bitten(X,Y) :- sire(X,_).
