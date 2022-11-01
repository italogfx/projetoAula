-- MySQL dump 10.13  Distrib 8.0.30, for macos12 (arm64)
--
-- Host: localhost    Database: atividadeSelect
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
-- Table structure for table `students`
--

DROP TABLE IF EXISTS `students`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `students` (
  `matricula` int NOT NULL AUTO_INCREMENT,
  `nome` text NOT NULL,
  `genero` text NOT NULL,
  `idade` int NOT NULL,
  `serie` text NOT NULL,
  `nivel` text NOT NULL,
  `1Bimestre` float DEFAULT NULL,
  `2Bimestre` float DEFAULT NULL,
  `3Bimestre` float DEFAULT NULL,
  `4Bimestre` float DEFAULT NULL,
  `notaFinal` float DEFAULT NULL,
  PRIMARY KEY (`matricula`)
) ENGINE=InnoDB AUTO_INCREMENT=19 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `students`
--

LOCK TABLES `students` WRITE;
/*!40000 ALTER TABLE `students` DISABLE KEYS */;
INSERT INTO `students` VALUES (1,'Antonio','Masculino',18,'3º','Ensino Médio',4,6,10,6,6.5),(2,'Pammella','Feminino',19,'3º','Ensino Médio',3,3,9,10,6.25),(3,'Eritrela','Feminino',14,'3º','Ensino Médio',2,5,0,6,3.25),(4,'Luna','Feminino',18,'3º','Ensino Médio',9,3,6,10,7),(5,'Joaquim','Masculino',17,'2º','Ensino Médio',7,9,7,3,6.5),(6,'Regina','Feminino',17,'2º','Ensino Médio',5,8,8,6,6.75),(7,'Harald','Masculino',16,'2º','Ensino Médio',4,1,9,5,4.75),(8,'Phillyp','Masculino',15,'2º','Ensino Médio',2,8,8,4,5.5),(9,'Reinaldo','Masculino',16,'1º','Ensino Médio',1,6,8,9,6),(10,'Garibalda','Feminino',15,'1º','Ensino Médio',0,4,7,7,4.5),(11,'Juvenal','Masculino',15,'1º','Ensino Médio',7,5,9,6,6.75),(12,'Brigite','Feminino',14,'1º','Ensino Médio',6,1,10,7,6),(13,'Estella','Feminino',13,'9º','Ensino Fundamental',7,3,8,8,6.5),(14,'Sammuel','Masculino',12,'9º','Ensino Fundamental',7,2,10,4,5.75),(15,'Debolla','Feminino',11,'9º','Ensino Fundamental',6,10,2,10,7),(16,'Natanael','Masculino',16,'9º','Ensino Fundamental',4,9,8,9,7.5),(17,'Joaquina','Feminino',14,'9º','Ensino Fundamental',6,8,9,10,8.25),(18,'Francineida','Feminino',15,'9º','Ensino Fundamental',10,8,6,7,7.75);
/*!40000 ALTER TABLE `students` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2022-10-03 16:54:27
