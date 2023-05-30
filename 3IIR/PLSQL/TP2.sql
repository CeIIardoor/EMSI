create table article(
   numart integer,
   desi_art varchar(20),
   pu_art float,
   qteStock integer,
   seuilmin integer,
   seuilmax integer,
   constraint article_pk primary key(numart)
);

create table commande(
   numCom integer,
   date_com date,
   constraint cmd_pk primary key(numCom)
);


Create table Ligne_Cmd(
   numCom integer,
   numArt integer,
   QteCmd integer,
   constraint lc_com_fk foreign key(numCom) references commande(numcom),
   constraint lc_art_fk foreign key(numart) references article(numart),
   constraint lc_pk primary key(numCom, numart)
)

-- get total of commande where id=10 and print 'commande normale' if total < 100000 else print 'commande speciale'

DECLARE @total FLOAT;  

SET @total = select sum(PUArt * QteCmd) from ligne_cmd inner join commande on ligne_cmd.numCom = commande.numCom where numCom = 10;

if @total < 100000 then
   print 'commande normale';
else
   print 'commande speciale';


-- delete atricle 8 and commande 5 and print 'commande supprimee'
-- update QteStock
DECLARE
@Quantite INT = (select sum(QteCmd) from ligne_cmd where numArt = 8 and numCom = 5);
update article set qteStock = qteStock + @Quantite;
delete from ligne_cmd where numArt = 8 and numCom = 5;
delete from commande where numCom = 5;

if not exists (select * from commande where numCom = 5) then
   delete from commande where numCom = 5;


-- print la liste des commandes avec leur type (commande normale ou commmande speciale)

select numCom, date_com, case when sum(PUArt * QteCmd) < 100000 then 'commande normale' else 'commande speciale' end as type from commande inner join ligne_cmd on commande.numCom = ligne_cmd.numCom group by numCom, date_com;

-- create view with 5 commandes with greatest total order desc

create view commande_view as
select numCom, date_com, sum(PUArt * QteCmd) as total from commande inner join ligne_cmd on commande.numCom = ligne_cmd.numCom group by numCom, date_com order by total desc;



