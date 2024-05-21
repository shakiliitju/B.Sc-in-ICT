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
-- Database: `lab_test_2`
--

-- --------------------------------------------------------

--
-- Table structure for table `course`
--

DROP TABLE IF EXISTS `course`;
CREATE TABLE IF NOT EXISTS `course` (
  `courseid` int(11) DEFAULT NULL,
  `coursename` varchar(225) DEFAULT NULL,
  `credit` float(3,1) DEFAULT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `course`
--

INSERT INTO `course` (`courseid`, `coursename`, `credit`) VALUES
(1, 'aad', 3.0),
(2, 'dbms', 3.0),
(3, 'accounting', 3.0),
(4, 'ca', 3.0);

-- --------------------------------------------------------

--
-- Table structure for table `hall`
--

DROP TABLE IF EXISTS `hall`;
CREATE TABLE IF NOT EXISTS `hall` (
  `hallid` int(11) DEFAULT NULL,
  `hallname` varchar(225) DEFAULT NULL,
  `location` varchar(225) DEFAULT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `hall`
--

INSERT INTO `hall` (`hallid`, `hallname`, `location`) VALUES
(1, 'MVH', 'JU'),
(2, 'MH', 'JU'),
(3, 'RTH', 'JU'),
(4, 'SSB', 'JU');

-- --------------------------------------------------------

--
-- Table structure for table `instructor`
--

DROP TABLE IF EXISTS `instructor`;
CREATE TABLE IF NOT EXISTS `instructor` (
  `instructor_id` int(11) DEFAULT NULL,
  `instructorname` varchar(225) DEFAULT NULL,
  `courseid` int(11) DEFAULT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `mentor`
--

DROP TABLE IF EXISTS `mentor`;
CREATE TABLE IF NOT EXISTS `mentor` (
  `mentorid` int(11) DEFAULT NULL,
  `mentorname` varchar(225) DEFAULT NULL,
  `mentoremail` varchar(225) DEFAULT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `mentor`
--

INSERT INTO `mentor` (`mentorid`, `mentorname`, `mentoremail`) VALUES
(1, 'MBTN', 'mbtn@gmail.com'),
(2, 'akjdfhuj', 'ksjdfb@gmail.com'),
(NULL, NULL, NULL),
(NULL, NULL, NULL),
(3, 'sgf', 'szgfv'),
(4, 'sbg', 'xng'),
(5, 'mdghsrtg', 'g'),
(6, 'xn', 'xnch'),
(7, 'jfkuyjn', 'jdfyngdmgh');

-- --------------------------------------------------------

--
-- Table structure for table `student`
--

DROP TABLE IF EXISTS `student`;
CREATE TABLE IF NOT EXISTS `student` (
  `stud_id` int(11) DEFAULT NULL,
  `name` varchar(255) DEFAULT NULL,
  `hometown` varchar(225) DEFAULT NULL,
  `email` varchar(225) DEFAULT NULL,
  `phone` int(11) DEFAULT NULL,
  `courseid` int(11) DEFAULT NULL,
  `grade` float(3,1) DEFAULT NULL,
  `mentorid` int(11) DEFAULT NULL,
  `hallid` int(11) DEFAULT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `student`
--

INSERT INTO `student` (`stud_id`, `name`, `hometown`, `email`, `phone`, `courseid`, `grade`, `mentorid`, `hallid`) VALUES
(1, 'manan noor', 'sjn', 'dxnjyh', 5463, 1, 3.3, 1, 1),
(2, 'gfg', 'Dhaka', 'hgf', 364, 1, 3.7, 1, 2),
(3, 'njgh', 'savar', 'fdvgsnh', 754, 2, 3.4, 2, 1),
(4, 'gbvf', 'ju', 'dxghng', 4687, 1, 3.5, 2, 1),
(5, 'Nusrat', 'Khulna', 'n@gm', 54630429, 1, 3.4, 1, 1),
(6, 'nusrat', 'Barisal', 'b@gamil', 5463, 2, 3.4, 2, 3);

-- --------------------------------------------------------

--
-- Stand-in structure for view `stu_info`
-- (See below for the actual view)
--
DROP VIEW IF EXISTS `stu_info`;
CREATE TABLE IF NOT EXISTS `stu_info` (
`name` varchar(255)
,`mentorname` varchar(225)
,`Hometown` varchar(225)
);

-- --------------------------------------------------------

--
-- Structure for view `stu_info`
--
DROP TABLE IF EXISTS `stu_info`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `stu_info`  AS  select `student`.`name` AS `name`,`mentor`.`mentorname` AS `mentorname`,`student`.`hometown` AS `Hometown` from (`student` join `mentor` on((`student`.`mentorid` = `mentor`.`mentorid`))) where (`student`.`hometown` = 'dhaka') ;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
