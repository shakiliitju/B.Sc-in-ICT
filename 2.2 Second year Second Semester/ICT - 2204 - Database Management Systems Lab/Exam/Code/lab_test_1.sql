-- phpMyAdmin SQL Dump
-- version 4.7.4
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1:3306
-- Generation Time: Mar 05, 2022 at 01:15 AM
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
-- Database: `lab_test_1`
--

-- --------------------------------------------------------

--
-- Table structure for table `customer_2023`
--

DROP TABLE IF EXISTS `customer_2023`;
CREATE TABLE IF NOT EXISTS `customer_2023` (
  `Cust_ID` int(10) NOT NULL,
  `Cust_name` varchar(15) DEFAULT NULL,
  `Cust_Country` varchar(10) DEFAULT NULL,
  `Cust_Address` varchar(100) DEFAULT NULL,
  `Cust_Phone` int(20) DEFAULT NULL,
  PRIMARY KEY (`Cust_ID`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `customer_2023`
--

INSERT INTO `customer_2023` (`Cust_ID`, `Cust_name`, `Cust_Country`, `Cust_Address`, `Cust_Phone`) VALUES
(175, 'Talat Noor', 'Bangladesh', 'Tejturipara, Farmgate, Dhaka', 1711545454),
(176, 'Manan Noor', 'India', 'Belvedere Rd, Alipore, Kolkata', 1711565656),
(177, 'Noor Hossain', 'Bangladesh', 'Gulshan-1, Dhaka', 1711575757);

-- --------------------------------------------------------

--
-- Table structure for table `item_2023`
--

DROP TABLE IF EXISTS `item_2023`;
CREATE TABLE IF NOT EXISTS `item_2023` (
  `Item_id` int(10) DEFAULT NULL,
  `Item_name` varchar(15) DEFAULT NULL,
  `Type` varchar(10) DEFAULT NULL,
  `UnitPrice` int(10) DEFAULT NULL,
  `AvailableQuantity` int(5) DEFAULT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `item_2023`
--

INSERT INTO `item_2023` (`Item_id`, `Item_name`, `Type`, `UnitPrice`, `AvailableQuantity`) VALUES
(101, 'Flour packet', 'Grocery', 75, 50),
(111, 'Rice packet', 'Grocery', 50, 40),
(151, 'Dairy Milk', 'Chocolate', 45, 60);

-- --------------------------------------------------------

--
-- Table structure for table `order_2023`
--

DROP TABLE IF EXISTS `order_2023`;
CREATE TABLE IF NOT EXISTS `order_2023` (
  `O_ID` int(10) DEFAULT NULL,
  `Date` date DEFAULT NULL,
  `Purchase_Amount` int(10) DEFAULT NULL,
  `Cust_ID` int(5) DEFAULT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `order_2023`
--

INSERT INTO `order_2023` (`O_ID`, `Date`, `Purchase_Amount`, `Cust_ID`) VALUES
(1, '2025-12-20', 18750, 177),
(2, '2025-12-20', 7000, 176),
(3, '2026-12-20', 20700, 176),
(4, '2001-10-20', 32000, 176);

-- --------------------------------------------------------

--
-- Table structure for table `ord_item_2023`
--

DROP TABLE IF EXISTS `ord_item_2023`;
CREATE TABLE IF NOT EXISTS `ord_item_2023` (
  `Item_id` int(10) DEFAULT NULL,
  `O_id` int(10) DEFAULT NULL,
  `Quantity` int(5) DEFAULT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `ord_item_2023`
--

INSERT INTO `ord_item_2023` (`Item_id`, `O_id`, `Quantity`) VALUES
(101, 1, 15),
(111, 1, 15),
(111, 2, 15),
(151, 2, 20),
(151, 3, 20);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
