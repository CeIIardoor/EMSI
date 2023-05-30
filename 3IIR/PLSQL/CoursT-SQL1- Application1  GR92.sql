-- 1. Déclarez une variable

declare @var1 int, @var2 varchar(30);

set @var1 = 10;
print @var1;

select @var2 = 'Bonjour';
print @var2;

-- 2. Initialisez la variable à l’âge maximale des étudiants 

declare @agemax float, @age float;

-- datediff  c'est une fonction de l'api sql server qui permet d'effectuer la différence entre la date actuelle et la date de naissance
-- l'option year permet de faire cette différence en terme d'année

set @agemax = (select max(datediff(year, birth_date, getdate())) from students );
print @agemax;

-- Si l'étudiant appartient au département de 'CS' alors afficher le nom, le département, et les cours qu'il suit;
-- sinon afficher que l'étudiant n'appartient pas au département 'CS‘


declare @stdno_cs varchar(20);

set @stdno_cs = 'S0421';

if(exists(select stdno from Students where depart = 'CS' and Stdno = @stdno_cs))
BEGIN
 select firstname, depart, courseID
 from students s join register r 
 on s.Stdno = r.stdno 
 where  s.Stdno = @stdno_cs
END
else
print 'L''étudiant n''appartient pas à ce département';

/*
 4. Afficher selon la note
       Min -> la note minimal
       En dessous de la moyenne de toutes les notes 
       En dessus de la moyenne de toutes les notes 
       La note max
*/

declare @minnote float, @avgnote float, @notemax float;

set @minnote = (select min(mark) from register);
set @avgnote = (select avg(mark) from register);
set @notemax = (select max(mark) from register);

select firstname, mark, 'niveau de la note' =
CASE
   when mark = @minnote then 'c''est la note minimale'
   when mark < @avgnote then 'vous avez une note en dessous de la moyenne'
   else  'vous avez une note en dessus de la moyenne'
END
 from students s join register r 
 on s.Stdno = r.stdno
