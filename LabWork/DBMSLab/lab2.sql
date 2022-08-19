-- MySQL dump 10.13  Distrib 8.0.30, for macos12.4 (arm64)
--
-- Host: localhost    Database: lab2
-- ------------------------------------------------------
-- Server version	8.0.30

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
-- Table structure for table `Customer`
--

DROP TABLE IF EXISTS `Customer`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `Customer` (
  `Cust_ID` varchar(5) DEFAULT NULL,
  `name` varchar(30) DEFAULT NULL,
  `city` varchar(15) DEFAULT NULL,
  `state` varchar(15) DEFAULT NULL,
  `pincode` int DEFAULT NULL,
  `products` varchar(40) DEFAULT NULL,
  `price` int DEFAULT NULL,
  UNIQUE KEY `Cust_ID` (`Cust_ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `Customer`
--

LOCK TABLES `Customer` WRITE;
/*!40000 ALTER TABLE `Customer` DISABLE KEYS */;
INSERT INTO `Customer` VALUES ('C101','Alex William','Indore','Madhya Pradesh',452013,'chair',4000),('C102','Alex William','Pune','Maharastra',652016,'table',8000),('C103','V. Iyer','Chennai','Tamil Nadu',752716,'table',8001),('C104','L. Laxmi','Chennai','Tamil Nadu',752717,'doll',200),('C105','Ravi Teja','Hyderabad','Telangana',252727,'doll',250),('C106','Raj Kumar','Delhi','Delhi',151127,'cricket kit',5250),('C107','Tuner Bond','Bhopal','Madhya Pradesh',451127,'football kit',3250),('C108','Nikhil Yadav','Chennai','Tamil Nadu',751127,'football kit',6250),('C109','Johney','Mumbai','Maharastra',651127,'football kit',6255);
/*!40000 ALTER TABLE `Customer` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2022-08-17 15:58:48
