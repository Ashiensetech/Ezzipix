-- phpMyAdmin SQL Dump
-- version 3.5.2
-- http://www.phpmyadmin.net
--
-- Host: localhost
-- Generation Time: Jul 08, 2015 at 08:16 PM
-- Server version: 5.5.25a
-- PHP Version: 5.4.4

SET SQL_MODE="NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `ezzipix`
--

-- --------------------------------------------------------

--
-- Table structure for table `activation_token`
--

CREATE TABLE IF NOT EXISTS `activation_token` (
  `id` int(11) NOT NULL,
  `u_id` int(11) NOT NULL,
  `token` varchar(100) NOT NULL,
  `service_provider_id` int(11) NOT NULL,
  `create_date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`),
  KEY `activation_tokken_service_provider` (`service_provider_id`),
  KEY `activation_tokken_user` (`u_id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `login`
--

CREATE TABLE IF NOT EXISTS `login` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `u_id` int(11) NOT NULL,
  `email` varchar(50) NOT NULL,
  `password` varchar(50) NOT NULL,
  `created_date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`),
  KEY `login_user` (`u_id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=9 ;

--
-- Dumping data for table `login`
--

INSERT INTO `login` (`id`, `u_id`, `email`, `password`, `created_date`) VALUES
(1, 6, 'user@user.com', '123456', '2015-07-08 18:06:07'),
(2, 7, 'kolil@dfdf.com', 'sdfsdf', '2015-07-08 18:06:51'),
(3, 8, 'sds@dfd.com', 'ssdsss', '2015-07-08 18:10:28'),
(4, 9, 'sds@dfd.com', 'ssdsss', '2015-07-08 18:10:34'),
(5, 10, 'sds@dfd.com', 'ssdsss', '2015-07-08 18:11:13'),
(6, 11, 'sdfd@sdf.com', 'sdsdfsdf', '2015-07-08 18:12:15'),
(7, 12, 'ssd@sd.con', 'sdsdsdsd', '2015-07-08 18:14:32'),
(8, 13, 'ssss@ssd.com', 'sdsdfsdfsdf', '2015-07-08 18:15:56');

-- --------------------------------------------------------

--
-- Table structure for table `service_provider`
--

CREATE TABLE IF NOT EXISTS `service_provider` (
  `id` int(11) NOT NULL,
  `name` varchar(50) NOT NULL,
  `created_by` int(11) NOT NULL,
  `created_date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`),
  KEY `service_provider_user` (`created_by`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `user`
--

CREATE TABLE IF NOT EXISTS `user` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `full_name` varchar(50) NOT NULL,
  `gender` varchar(5) NOT NULL,
  `dob` date DEFAULT NULL,
  `created_date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=14 ;

--
-- Dumping data for table `user`
--

INSERT INTO `user` (`id`, `full_name`, `gender`, `dob`, `created_date`) VALUES
(6, 'User', 'femal', NULL, '2015-07-08 18:06:07'),
(7, 'user', 'femal', NULL, '2015-07-08 18:06:51'),
(8, 'jj', 'femal', NULL, '2015-07-08 18:10:28'),
(9, 'jj', 'femal', NULL, '2015-07-08 18:10:34'),
(10, 'jj', 'femal', NULL, '2015-07-08 18:11:13'),
(11, 'asd', 'femal', NULL, '2015-07-08 18:12:15'),
(12, 'ss', 'femal', NULL, '2015-07-08 18:14:32'),
(13, 'sss', 'femal', NULL, '2015-07-08 18:15:56');

-- --------------------------------------------------------

--
-- Table structure for table `user_service`
--

CREATE TABLE IF NOT EXISTS `user_service` (
  `id` int(11) NOT NULL,
  `service_user_id` varchar(50) NOT NULL,
  `service_provider_id` int(11) NOT NULL,
  `u_id` int(11) NOT NULL,
  `active` int(11) NOT NULL,
  `created_date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`),
  KEY `user_service_service_provider` (`service_provider_id`),
  KEY `user_service_user` (`u_id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `user_service_data`
--

CREATE TABLE IF NOT EXISTS `user_service_data` (
  `id` int(11) NOT NULL,
  `user_service_id` int(11) NOT NULL,
  `media_file_path` varchar(100) NOT NULL,
  `others_obj` text NOT NULL,
  `created_date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`),
  KEY `user_service_data_user_service` (`user_service_id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Constraints for dumped tables
--

--
-- Constraints for table `activation_token`
--
ALTER TABLE `activation_token`
  ADD CONSTRAINT `activation_tokken_user` FOREIGN KEY (`u_id`) REFERENCES `user` (`id`),
  ADD CONSTRAINT `activation_tokken_service_provider` FOREIGN KEY (`service_provider_id`) REFERENCES `service_provider` (`id`);

--
-- Constraints for table `login`
--
ALTER TABLE `login`
  ADD CONSTRAINT `login_user` FOREIGN KEY (`u_id`) REFERENCES `user` (`id`) ON UPDATE CASCADE;

--
-- Constraints for table `service_provider`
--
ALTER TABLE `service_provider`
  ADD CONSTRAINT `service_provider_user` FOREIGN KEY (`created_by`) REFERENCES `user` (`id`) ON UPDATE CASCADE;

--
-- Constraints for table `user_service`
--
ALTER TABLE `user_service`
  ADD CONSTRAINT `user_service_user` FOREIGN KEY (`u_id`) REFERENCES `user` (`id`) ON UPDATE CASCADE,
  ADD CONSTRAINT `user_service_service_provider` FOREIGN KEY (`service_provider_id`) REFERENCES `service_provider` (`id`);

--
-- Constraints for table `user_service_data`
--
ALTER TABLE `user_service_data`
  ADD CONSTRAINT `user_service_data_user_service` FOREIGN KEY (`user_service_id`) REFERENCES `user_service` (`id`) ON UPDATE CASCADE;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
