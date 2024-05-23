-- phpMyAdmin SQL Dump
-- version 4.7.4
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1:3306
-- Generation Time: Mar 05, 2022 at 01:14 AM
-- Server version: 5.7.19
-- PHP Version: 5.6.31

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `lab_1`
--

-- --------------------------------------------------------

--
-- Table structure for table `customer_shakil_2023`
--

DROP TABLE IF EXISTS `customer_shakil_2023`;
CREATE TABLE IF NOT EXISTS `customer_shakil_2023` (
  `Cust_ID` varchar(10) DEFAULT NULL,
  `Cust_name` varchar(20) DEFAULT NULL,
  `Cust_country` varchar(15) DEFAULT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `customer_shakil_2023`
--

INSERT INTO `customer_shakil_2023` (`Cust_ID`, `Cust_name`, `Cust_country`) VALUES
('C-1', 'Badshah', 'India'),
('C-2', 'Ayesha', 'Bangladesh'),
('C-3', 'Robert', 'England'),
('C-4', 'Darwin', 'England'),
('C-5', 'Danish', 'USA'),
('C-6', 'Sohel', 'Bangladesh');

-- --------------------------------------------------------

--
-- Table structure for table `order_shakil_2023`
--

DROP TABLE IF EXISTS `order_shakil_2023`;
CREATE TABLE IF NOT EXISTS `order_shakil_2023` (
  `Order_ID` varchar(10) NOT NULL,
  `Cust_ID` varchar(5) DEFAULT NULL,
  `Order_date` date DEFAULT NULL,
  `Purcharse_amount` int(10) DEFAULT NULL,
  `No_of_item` int(10) DEFAULT NULL,
  PRIMARY KEY (`Order_ID`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `order_shakil_2023`
--

INSERT INTO `order_shakil_2023` (`Order_ID`, `Cust_ID`, `Order_date`, `Purcharse_amount`, `No_of_item`) VALUES
('O-1', 'C-1', '2018-12-01', 2000, 4),
('O-2', 'C-1', '2018-12-01', 3000, 3),
('O-3', 'C-2', '2018-01-23', 17000, 10),
('O-4', 'C-2', '2018-12-01', 5000, 9),
('O-5', 'C-3', '2018-12-01', 5000, 12),
('O-6', 'C-4', '2018-07-25', 4000, 6);

-- --------------------------------------------------------

--
-- Table structure for table `shippers_shakil_2023`
--

DROP TABLE IF EXISTS `shippers_shakil_2023`;
CREATE TABLE IF NOT EXISTS `shippers_shakil_2023` (
  `Shipper_ID` varchar(5) DEFAULT NULL,
  `Shipper_name` varchar(10) DEFAULT NULL,
  `Shipper_country` varchar(10) DEFAULT NULL,
  `Order_ID` varchar(5) DEFAULT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `shippers_shakil_2023`
--

INSERT INTO `shippers_shakil_2023` (`Shipper_ID`, `Shipper_name`, `Shipper_country`, `Order_ID`) VALUES
('S-1', 'Amazon', 'England', 'O-5'),
('S-1', 'Ocean-12', 'India', 'O-1'),
('S-2', 'Ocean-11', 'USA', 'O-3'),
('S-3', 'Amazon', 'England', 'O-6');
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
