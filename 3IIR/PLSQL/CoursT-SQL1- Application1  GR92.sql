-- 1. D�clarez une variable

declare @var1 int, @var2 varchar(30);

set @var1 = 10;
print @var1;

select @var2 = 'Bonjour';
print @var2;

-- 2. Initialisez la variable � l��ge maximale des �tudiants�

declare @agemax float, @age float;

-- datediff  c'est une fonction de l'api sql server qui permet d'effectuer la diff�rence entre la date actuelle et la date de naissance
-- l'option year permet de faire cette diff�rence en terme d'ann�e

set @agemax = (select max(datediff(year, birth_date, getdate())) from students );
print @agemax;

-- Si l'�tudiant appartient au d�partement de 'CS' alors afficher le nom, le d�partement, et les cours qu'il suit;
-- sinon afficher que l'�tudiant n'appartient pas au d�partement 'CS�


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
print 'L''�tudiant n''appartient pas � ce d�partement';

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
