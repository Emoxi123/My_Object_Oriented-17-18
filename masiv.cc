//ako definirame masiv int * darr = new int[]; - pri toq sluchai
//pametta ima dve chasti: stack i heap; 
//vlizaiki v stack-a predi purviqt red shte ima argumenti - argc i argv.
//ako imame promenliva int size=10 i funkciq foo(size) shte ima kopie na size-a. v stack-a sled tova shte ima foo: array i posle foo:*
//mejduvremenno v heep-a pametta shte si ostane a v stacka kato izleze ot scope-a shte se iztriqt;
//destructur ni e nujen. definira se s tilda i imeto na klasa.Nujen nin e shtoto pametta koqto e v heep-a ne se osvobojdava sama;
