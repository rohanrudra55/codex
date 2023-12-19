-- MySQL dump 10.13  Distrib 8.0.33, for macos12.6 (x86_64)
--
-- Host: localhost    Database: customer
-- ------------------------------------------------------
-- Server version	8.0.33

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8mb4 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `customers`
--

DROP TABLE IF EXISTS `customers`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `customers` (
  `CustomerID` int NOT NULL AUTO_INCREMENT,
  `NAME` varchar(50) NOT NULL,
  `ContactName` varchar(50) NOT NULL,
  `Address` varchar(100) NOT NULL,
  `City` varchar(50) NOT NULL DEFAULT 'NYC',
  `PostalCode` varchar(10) NOT NULL DEFAULT '0',
  `Country` varchar(50) NOT NULL,
  PRIMARY KEY (`CustomerID`)
) ENGINE=InnoDB AUTO_INCREMENT=123 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `customers`
--

LOCK TABLES `customers` WRITE;
/*!40000 ALTER TABLE `customers` DISABLE KEYS */;
INSERT INTO `customers` VALUES (1,'Alfreds Futterkiste','Alfred Schmidt','Obere Str. 57','Frankfurt','12209','Germany'),(2,'Ana Trujillo Emparedados y helados','Ana Trujillo','Avda. de la Constitución 2222','México D.F.','05021','Mexico'),(3,'Antonio Moreno Taquería','Antonio Moreno','Mataderos 2312','México D.F.','05023','Mexico'),(4,'Around the Horn','Thomas Hardy','120 Hanover Sq.','London','WA1 1DP','UK'),(5,'Berglunds snabbköp','Christina Berglund','Berguvsvägen 8','Luleå','S-958 22','Sweden'),(6,'Alfreds Futterkiste','Maria Anders','Obere Str. 57','Berlin','12209','Germany'),(7,'Ana Trujillo Emparedados y helados','Ana Trujillo','Avda. de la Constitución 2222','México D.F.','05021','Mexico'),(8,'Antonio Moreno Taquería','Antonio Moreno','Mataderos 2312','México D.F.','05023','Mexico'),(9,'Around the Horn','Thomas Hardy','120 Hanover Sq.','London','WA1 1DP','UK'),(10,'Berglunds snabbköp','Christina Berglund','Berguvsvägen 8','Luleå','S-958 22','Sweden'),(11,'Blauer See Delikatessen','Hanna Moos','Forsterstr. 57','Mannheim','68306','Germany'),(12,'Blondel père et fils','Frédérique Citeaux','24, place Kléber','Strasbourg','67000','France'),(13,'Cactus Comidas para llevar','Patricio Simpson','Cerrito 333','Buenos Aires','1010','Argentina'),(14,'Centro comercial Moctezuma','Francisco Chang','Sierras de Granada 9993','México D.F.','05022','Mexico'),(15,'Chop-suey Chinese','Yang Wang','Hauptstr. 29','Bern','3012','Switzerland'),(16,'Comércio Mineiro','Pedro Afonso','Av. dos Lusíadas, 23','São Paulo','05432-043','Brazil'),(17,'Consolidated Holdings','Elizabeth Brown','Berkeley Gardens 12 Brewery','London','WX1 6LT','UK'),(18,'Drachenblut Delikatessend','Sven Ottlieb','Walserweg 21','Aachen','52066','Germany'),(19,'Du monde entier','Janine Labrune','67, rue des Cinquante Otages','Nantes','44000','France'),(20,'Eastern Connection','Ann Devon','35 King George','London','WX3 6FW','UK'),(21,'Ernst Handel','Roland Mendel','Kirchgasse 6','Graz','8010','Austria'),(22,'Familia Arquibaldo','Aria Cruz','Rua Orós, 92','São Paulo','05442-030','Brazil'),(23,'FISSA Fabrica Inter. Salchichas S.A.','Diego Roel','C/ Moralzarzal, 86','Madrid','28034','Spain'),(24,'Folies gourmandes','Martine Rancé','184, chaussée de Tournai','Lille','59000','France'),(25,'Folk och fä HB','Maria Larsson','Åkergatan 24','Bräcke','S-844 67','Sweden'),(26,'Frankenversand','Peter Franken','Berliner Platz 43','München','80805','Germany'),(27,'France restauration','Carine Schmitt','54, rue Royale','Nantes','44000','France'),(28,'Franchi S.p.A.','Paolo Accorti','Via Monte Bianco 34','Torino','10100','Italy'),(29,'Furia Bacalhau e Frutos do Mar','Lino Rodriguez','Jardim das rosas n. 32','Lisboa','1675','Portugal'),(30,'Galería del gastrónomo','Eduardo Saavedra','Rambla de Cataluña, 23','Barcelona','08022','Spain'),(31,'Godos Cocina Típica','José Pedro Freyre','C/ Romero, 33','Sevilla','41101','Spain'),(32,'Gourmet Lanchonetes','André Fonseca','Av. Brasil, 442','Campinas','04876-786','Brazil'),(33,'Great Lakes Food Market','Howard Snyder','2732 Baker Blvd.','Eugene','97403','USA'),(34,'GROSELLA-Restaurante','Manuel Pereira','5ª Ave. Los Palos Grandes','Caracas','1081','Venezuela'),(35,'Hanari Carnes','Mario Pontes','Rua do Paço, 67','Rio de Janeiro','05454-876','Brazil'),(36,'HILARIÓN-Abastos','Carlos Hernández','Carrera 22 con Ave. Carlos Soublette #8-35','San Cristóbal','5022','Venezuela'),(37,'Hungry Coyote Import Store','Yoshi Latimer','City Center Plaza 516 Main St.','Elgin','97827','USA'),(38,'Hungry Owl All-Night Grocers','Patricia McKenna','8 Johnstown Road','Cork','','Ireland'),(39,'Island Trading','Helen Bennett','Garden House Crowther Way','Cowes','PO31 7PJ','UK'),(40,'Königlich Essen','Philip Cramer','Maubelstr. 90','Brandenburg','14776','Germany');
/*!40000 ALTER TABLE `customers` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `ORDERS`
--

DROP TABLE IF EXISTS `ORDERS`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `ORDERS` (
  `OrderID` int NOT NULL,
  `CustomerID` int NOT NULL,
  `OrderDate` date DEFAULT NULL,
  PRIMARY KEY (`OrderID`),
  KEY `CustomerID` (`CustomerID`),
  CONSTRAINT `orders_ibfk_1` FOREIGN KEY (`CustomerID`) REFERENCES `CUSTOMERS` (`CustomerID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `ORDERS`
--

LOCK TABLES `ORDERS` WRITE;
/*!40000 ALTER TABLE `ORDERS` DISABLE KEYS */;
INSERT INTO `ORDERS` VALUES (10308,2,'1996-09-18'),(10309,37,'1996-09-19'),(10310,23,'1996-09-20'),(10313,13,NULL);
/*!40000 ALTER TABLE `ORDERS` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `Suppliers`
--

DROP TABLE IF EXISTS `Suppliers`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `Suppliers` (
  `SupplierID` int NOT NULL,
  `SupplierName` varchar(50) NOT NULL,
  `ContactName` varchar(50) DEFAULT NULL,
  `Address` varchar(100) DEFAULT NULL,
  `City` varchar(50) DEFAULT NULL,
  `PostalCode` varchar(20) DEFAULT NULL,
  `Country` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`SupplierID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `Suppliers`
--

LOCK TABLES `Suppliers` WRITE;
/*!40000 ALTER TABLE `Suppliers` DISABLE KEYS */;
INSERT INTO `Suppliers` VALUES (1,'Exotic Liquid','Charlotte Cooper','49 Gilbert St.','London','EC1 4SD','UK'),(2,'New Orleans Cajun Delights','Shelley Burke','P.O. Box 78934','New Orleans','70117','USA'),(3,'Grandma Kelly\'s Homestead','Regina Murphy','707 Oxford Rd.','Ann Arbor','48104','USA'),(4,'Tokyo Traders','Yoshi Nagase','9-8 Sekimai Musashino-shi','Tokyo','100',NULL);
/*!40000 ALTER TABLE `Suppliers` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2023-07-20 10:38:29
