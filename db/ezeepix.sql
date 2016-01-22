-- phpMyAdmin SQL Dump
-- version 4.0.10deb1
-- http://www.phpmyadmin.net
--
-- Host: localhost
-- Generation Time: Nov 27, 2015 at 06:21 PM
-- Server version: 5.5.44-0ubuntu0.14.04.1
-- PHP Version: 5.5.30-1+deb.sury.org~trusty+1

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `ezeepix`
--

-- --------------------------------------------------------

--
-- Table structure for table `activation_token`
--

CREATE TABLE IF NOT EXISTS `activation_token` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `u_id` int(11) NOT NULL,
  `token` varchar(100) NOT NULL,
  `service_provider_id` int(11) NOT NULL,
  `create_date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`),
  KEY `activation_tokken_service_provider` (`service_provider_id`),
  KEY `activation_tokken_user` (`u_id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=43 ;

--
-- Dumping data for table `activation_token`
--

-- Table structure for table `country`
--

CREATE TABLE IF NOT EXISTS `country` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `iso` char(2) NOT NULL,
  `name` varchar(80) NOT NULL,
  `nicename` varchar(80) NOT NULL,
  `iso3` char(3) DEFAULT NULL,
  `numcode` int(6) DEFAULT NULL,
  `phonecode` int(5) NOT NULL,
  `status` int(11) NOT NULL DEFAULT '1',
  PRIMARY KEY (`id`)
) ENGINE=MyISAM  DEFAULT CHARSET=latin1 AUTO_INCREMENT=240 ;

--
-- Dumping data for table `country`
--

INSERT INTO `country` (`id`, `iso`, `name`, `nicename`, `iso3`, `numcode`, `phonecode`, `status`) VALUES
(1, 'AF', 'AFGHANISTAN', 'Afghanistan', 'AFG', 4, 93, 1),
(2, 'AL', 'ALBANIA', 'Albania', 'ALB', 8, 355, 1),
(3, 'DZ', 'ALGERIA', 'Algeria', 'DZA', 12, 213, 1),
(4, 'AS', 'AMERICAN SAMOA', 'American Samoa', 'ASM', 16, 1684, 1),
(5, 'AD', 'ANDORRA', 'Andorra', 'AND', 20, 376, 1),
(6, 'AO', 'ANGOLA', 'Angola', 'AGO', 24, 244, 1),
(7, 'AI', 'ANGUILLA', 'Anguilla', 'AIA', 660, 1264, 1),
(8, 'AQ', 'ANTARCTICA', 'Antarctica', NULL, NULL, 0, 1),
(9, 'AG', 'ANTIGUA AND BARBUDA', 'Antigua and Barbuda', 'ATG', 28, 1268, 1),
(10, 'AR', 'ARGENTINA', 'Argentina', 'ARG', 32, 54, 1),
(11, 'AM', 'ARMENIA', 'Armenia', 'ARM', 51, 374, 1),
(12, 'AW', 'ARUBA', 'Aruba', 'ABW', 533, 297, 1),
(13, 'AU', 'AUSTRALIA', 'Australia', 'AUS', 36, 61, 1),
(14, 'AT', 'AUSTRIA', 'Austria', 'AUT', 40, 43, 1),
(15, 'AZ', 'AZERBAIJAN', 'Azerbaijan', 'AZE', 31, 994, 1),
(16, 'BS', 'BAHAMAS', 'Bahamas', 'BHS', 44, 1242, 1),
(17, 'BH', 'BAHRAIN', 'Bahrain', 'BHR', 48, 973, 1),
(18, 'BD', 'BANGLADESH', 'Bangladesh', 'BGD', 50, 880, 1),
(19, 'BB', 'BARBADOS', 'Barbados', 'BRB', 52, 1246, 1),
(20, 'BY', 'BELARUS', 'Belarus', 'BLR', 112, 375, 1),
(21, 'BE', 'BELGIUM', 'Belgium', 'BEL', 56, 32, 1),
(22, 'BZ', 'BELIZE', 'Belize', 'BLZ', 84, 501, 1),
(23, 'BJ', 'BENIN', 'Benin', 'BEN', 204, 229, 1),
(24, 'BM', 'BERMUDA', 'Bermuda', 'BMU', 60, 1441, 1),
(25, 'BT', 'BHUTAN', 'Bhutan', 'BTN', 64, 975, 1),
(26, 'BO', 'BOLIVIA', 'Bolivia', 'BOL', 68, 591, 1),
(27, 'BA', 'BOSNIA AND HERZEGOVINA', 'Bosnia and Herzegovina', 'BIH', 70, 387, 1),
(28, 'BW', 'BOTSWANA', 'Botswana', 'BWA', 72, 267, 1),
(29, 'BV', 'BOUVET ISLAND', 'Bouvet Island', NULL, NULL, 0, 1),
(30, 'BR', 'BRAZIL', 'Brazil', 'BRA', 76, 55, 1),
(31, 'IO', 'BRITISH INDIAN OCEAN TERRITORY', 'British Indian Ocean Territory', NULL, NULL, 246, 1),
(32, 'BN', 'BRUNEI DARUSSALAM', 'Brunei Darussalam', 'BRN', 96, 673, 1),
(33, 'BG', 'BULGARIA', 'Bulgaria', 'BGR', 100, 359, 1),
(34, 'BF', 'BURKINA FASO', 'Burkina Faso', 'BFA', 854, 226, 1),
(35, 'BI', 'BURUNDI', 'Burundi', 'BDI', 108, 257, 1),
(36, 'KH', 'CAMBODIA', 'Cambodia', 'KHM', 116, 855, 1),
(37, 'CM', 'CAMEROON', 'Cameroon', 'CMR', 120, 237, 1),
(38, 'CA', 'CANADA', 'Canada', 'CAN', 124, 1, 1),
(39, 'CV', 'CAPE VERDE', 'Cape Verde', 'CPV', 132, 238, 1),
(40, 'KY', 'CAYMAN ISLANDS', 'Cayman Islands', 'CYM', 136, 1345, 1),
(41, 'CF', 'CENTRAL AFRICAN REPUBLIC', 'Central African Republic', 'CAF', 140, 236, 1),
(42, 'TD', 'CHAD', 'Chad', 'TCD', 148, 235, 1),
(43, 'CL', 'CHILE', 'Chile', 'CHL', 152, 56, 1),
(44, 'CN', 'CHINA', 'China', 'CHN', 156, 86, 1),
(45, 'CX', 'CHRISTMAS ISLAND', 'Christmas Island', NULL, NULL, 61, 1),
(46, 'CC', 'COCOS (KEELING) ISLANDS', 'Cocos (Keeling) Islands', NULL, NULL, 672, 1),
(47, 'CO', 'COLOMBIA', 'Colombia', 'COL', 170, 57, 1),
(48, 'KM', 'COMOROS', 'Comoros', 'COM', 174, 269, 1),
(49, 'CG', 'CONGO', 'Congo', 'COG', 178, 242, 1),
(50, 'CD', 'CONGO, THE DEMOCRATIC REPUBLIC OF THE', 'Congo, the Democratic Republic of the', 'COD', 180, 242, 1),
(51, 'CK', 'COOK ISLANDS', 'Cook Islands', 'COK', 184, 682, 1),
(52, 'CR', 'COSTA RICA', 'Costa Rica', 'CRI', 188, 506, 1),
(53, 'CI', 'COTE D''IVOIRE', 'Cote D''Ivoire', 'CIV', 384, 225, 1),
(54, 'HR', 'CROATIA', 'Croatia', 'HRV', 191, 385, 1),
(55, 'CU', 'CUBA', 'Cuba', 'CUB', 192, 53, 1),
(56, 'CY', 'CYPRUS', 'Cyprus', 'CYP', 196, 357, 1),
(57, 'CZ', 'CZECH REPUBLIC', 'Czech Republic', 'CZE', 203, 420, 1),
(58, 'DK', 'DENMARK', 'Denmark', 'DNK', 208, 45, 1),
(59, 'DJ', 'DJIBOUTI', 'Djibouti', 'DJI', 262, 253, 1),
(60, 'DM', 'DOMINICA', 'Dominica', 'DMA', 212, 1767, 1),
(61, 'DO', 'DOMINICAN REPUBLIC', 'Dominican Republic', 'DOM', 214, 1809, 1),
(62, 'EC', 'ECUADOR', 'Ecuador', 'ECU', 218, 593, 1),
(63, 'EG', 'EGYPT', 'Egypt', 'EGY', 818, 20, 1),
(64, 'SV', 'EL SALVADOR', 'El Salvador', 'SLV', 222, 503, 1),
(65, 'GQ', 'EQUATORIAL GUINEA', 'Equatorial Guinea', 'GNQ', 226, 240, 1),
(66, 'ER', 'ERITREA', 'Eritrea', 'ERI', 232, 291, 1),
(67, 'EE', 'ESTONIA', 'Estonia', 'EST', 233, 372, 1),
(68, 'ET', 'ETHIOPIA', 'Ethiopia', 'ETH', 231, 251, 1),
(69, 'FK', 'FALKLAND ISLANDS (MALVINAS)', 'Falkland Islands (Malvinas)', 'FLK', 238, 500, 1),
(70, 'FO', 'FAROE ISLANDS', 'Faroe Islands', 'FRO', 234, 298, 1),
(71, 'FJ', 'FIJI', 'Fiji', 'FJI', 242, 679, 1),
(72, 'FI', 'FINLAND', 'Finland', 'FIN', 246, 358, 1),
(73, 'FR', 'FRANCE', 'France', 'FRA', 250, 33, 1),
(74, 'GF', 'FRENCH GUIANA', 'French Guiana', 'GUF', 254, 594, 1),
(75, 'PF', 'FRENCH POLYNESIA', 'French Polynesia', 'PYF', 258, 689, 1),
(76, 'TF', 'FRENCH SOUTHERN TERRITORIES', 'French Southern Territories', NULL, NULL, 0, 1),
(77, 'GA', 'GABON', 'Gabon', 'GAB', 266, 241, 1),
(78, 'GM', 'GAMBIA', 'Gambia', 'GMB', 270, 220, 1),
(79, 'GE', 'GEORGIA', 'Georgia', 'GEO', 268, 995, 1),
(80, 'DE', 'GERMANY', 'Germany', 'DEU', 276, 49, 1),
(81, 'GH', 'GHANA', 'Ghana', 'GHA', 288, 233, 1),
(82, 'GI', 'GIBRALTAR', 'Gibraltar', 'GIB', 292, 350, 1),
(83, 'GR', 'GREECE', 'Greece', 'GRC', 300, 30, 1),
(84, 'GL', 'GREENLAND', 'Greenland', 'GRL', 304, 299, 1),
(85, 'GD', 'GRENADA', 'Grenada', 'GRD', 308, 1473, 1),
(86, 'GP', 'GUADELOUPE', 'Guadeloupe', 'GLP', 312, 590, 1),
(87, 'GU', 'GUAM', 'Guam', 'GUM', 316, 1671, 1),
(88, 'GT', 'GUATEMALA', 'Guatemala', 'GTM', 320, 502, 1),
(89, 'GN', 'GUINEA', 'Guinea', 'GIN', 324, 224, 1),
(90, 'GW', 'GUINEA-BISSAU', 'Guinea-Bissau', 'GNB', 624, 245, 1),
(91, 'GY', 'GUYANA', 'Guyana', 'GUY', 328, 592, 1),
(92, 'HT', 'HAITI', 'Haiti', 'HTI', 332, 509, 1),
(93, 'HM', 'HEARD ISLAND AND MCDONALD ISLANDS', 'Heard Island and Mcdonald Islands', NULL, NULL, 0, 1),
(94, 'VA', 'HOLY SEE (VATICAN CITY STATE)', 'Holy See (Vatican City State)', 'VAT', 336, 39, 1),
(95, 'HN', 'HONDURAS', 'Honduras', 'HND', 340, 504, 1),
(96, 'HK', 'HONG KONG', 'Hong Kong', 'HKG', 344, 852, 1),
(97, 'HU', 'HUNGARY', 'Hungary', 'HUN', 348, 36, 1),
(98, 'IS', 'ICELAND', 'Iceland', 'ISL', 352, 354, 1),
(99, 'IN', 'INDIA', 'India', 'IND', 356, 91, 1),
(100, 'ID', 'INDONESIA', 'Indonesia', 'IDN', 360, 62, 1),
(101, 'IR', 'IRAN, ISLAMIC REPUBLIC OF', 'Iran, Islamic Republic of', 'IRN', 364, 98, 1),
(102, 'IQ', 'IRAQ', 'Iraq', 'IRQ', 368, 964, 1),
(103, 'IE', 'IRELAND', 'Ireland', 'IRL', 372, 353, 1),
(104, 'IL', 'ISRAEL', 'Israel', 'ISR', 376, 972, 1),
(105, 'IT', 'ITALY', 'Italy', 'ITA', 380, 39, 1),
(106, 'JM', 'JAMAICA', 'Jamaica', 'JAM', 388, 1876, 1),
(107, 'JP', 'JAPAN', 'Japan', 'JPN', 392, 81, 1),
(108, 'JO', 'JORDAN', 'Jordan', 'JOR', 400, 962, 1),
(109, 'KZ', 'KAZAKHSTAN', 'Kazakhstan', 'KAZ', 398, 7, 1),
(110, 'KE', 'KENYA', 'Kenya', 'KEN', 404, 254, 1),
(111, 'KI', 'KIRIBATI', 'Kiribati', 'KIR', 296, 686, 1),
(112, 'KP', 'KOREA, DEMOCRATIC PEOPLE''S REPUBLIC OF', 'Korea, Democratic People''s Republic of', 'PRK', 408, 850, 1),
(113, 'KR', 'KOREA, REPUBLIC OF', 'Korea, Republic of', 'KOR', 410, 82, 1),
(114, 'KW', 'KUWAIT', 'Kuwait', 'KWT', 414, 965, 1),
(115, 'KG', 'KYRGYZSTAN', 'Kyrgyzstan', 'KGZ', 417, 996, 1),
(116, 'LA', 'LAO PEOPLE''S DEMOCRATIC REPUBLIC', 'Lao People''s Democratic Republic', 'LAO', 418, 856, 1),
(117, 'LV', 'LATVIA', 'Latvia', 'LVA', 428, 371, 1),
(118, 'LB', 'LEBANON', 'Lebanon', 'LBN', 422, 961, 1),
(119, 'LS', 'LESOTHO', 'Lesotho', 'LSO', 426, 266, 1),
(120, 'LR', 'LIBERIA', 'Liberia', 'LBR', 430, 231, 1),
(121, 'LY', 'LIBYAN ARAB JAMAHIRIYA', 'Libyan Arab Jamahiriya', 'LBY', 434, 218, 1),
(122, 'LI', 'LIECHTENSTEIN', 'Liechtenstein', 'LIE', 438, 423, 1),
(123, 'LT', 'LITHUANIA', 'Lithuania', 'LTU', 440, 370, 1),
(124, 'LU', 'LUXEMBOURG', 'Luxembourg', 'LUX', 442, 352, 1),
(125, 'MO', 'MACAO', 'Macao', 'MAC', 446, 853, 1),
(126, 'MK', 'MACEDONIA, THE FORMER YUGOSLAV REPUBLIC OF', 'Macedonia, the Former Yugoslav Republic of', 'MKD', 807, 389, 1),
(127, 'MG', 'MADAGASCAR', 'Madagascar', 'MDG', 450, 261, 1),
(128, 'MW', 'MALAWI', 'Malawi', 'MWI', 454, 265, 1),
(129, 'MY', 'MALAYSIA', 'Malaysia', 'MYS', 458, 60, 1),
(130, 'MV', 'MALDIVES', 'Maldives', 'MDV', 462, 960, 1),
(131, 'ML', 'MALI', 'Mali', 'MLI', 466, 223, 1),
(132, 'MT', 'MALTA', 'Malta', 'MLT', 470, 356, 1),
(133, 'MH', 'MARSHALL ISLANDS', 'Marshall Islands', 'MHL', 584, 692, 1),
(134, 'MQ', 'MARTINIQUE', 'Martinique', 'MTQ', 474, 596, 1),
(135, 'MR', 'MAURITANIA', 'Mauritania', 'MRT', 478, 222, 1),
(136, 'MU', 'MAURITIUS', 'Mauritius', 'MUS', 480, 230, 1),
(137, 'YT', 'MAYOTTE', 'Mayotte', NULL, NULL, 269, 1),
(138, 'MX', 'MEXICO', 'Mexico', 'MEX', 484, 52, 1),
(139, 'FM', 'MICRONESIA, FEDERATED STATES OF', 'Micronesia, Federated States of', 'FSM', 583, 691, 1),
(140, 'MD', 'MOLDOVA, REPUBLIC OF', 'Moldova, Republic of', 'MDA', 498, 373, 1),
(141, 'MC', 'MONACO', 'Monaco', 'MCO', 492, 377, 1),
(142, 'MN', 'MONGOLIA', 'Mongolia', 'MNG', 496, 976, 1),
(143, 'MS', 'MONTSERRAT', 'Montserrat', 'MSR', 500, 1664, 1),
(144, 'MA', 'MOROCCO', 'Morocco', 'MAR', 504, 212, 1),
(145, 'MZ', 'MOZAMBIQUE', 'Mozambique', 'MOZ', 508, 258, 1),
(146, 'MM', 'MYANMAR', 'Myanmar', 'MMR', 104, 95, 1),
(147, 'NA', 'NAMIBIA', 'Namibia', 'NAM', 516, 264, 1),
(148, 'NR', 'NAURU', 'Nauru', 'NRU', 520, 674, 1),
(149, 'NP', 'NEPAL', 'Nepal', 'NPL', 524, 977, 1),
(150, 'NL', 'NETHERLANDS', 'Netherlands', 'NLD', 528, 31, 1),
(151, 'AN', 'NETHERLANDS ANTILLES', 'Netherlands Antilles', 'ANT', 530, 599, 1),
(152, 'NC', 'NEW CALEDONIA', 'New Caledonia', 'NCL', 540, 687, 1),
(153, 'NZ', 'NEW ZEALAND', 'New Zealand', 'NZL', 554, 64, 1),
(154, 'NI', 'NICARAGUA', 'Nicaragua', 'NIC', 558, 505, 1),
(155, 'NE', 'NIGER', 'Niger', 'NER', 562, 227, 1),
(156, 'NG', 'NIGERIA', 'Nigeria', 'NGA', 566, 234, 1),
(157, 'NU', 'NIUE', 'Niue', 'NIU', 570, 683, 1),
(158, 'NF', 'NORFOLK ISLAND', 'Norfolk Island', 'NFK', 574, 672, 1),
(159, 'MP', 'NORTHERN MARIANA ISLANDS', 'Northern Mariana Islands', 'MNP', 580, 1670, 1),
(160, 'NO', 'NORWAY', 'Norway', 'NOR', 578, 47, 1),
(161, 'OM', 'OMAN', 'Oman', 'OMN', 512, 968, 1),
(162, 'PK', 'PAKISTAN', 'Pakistan', 'PAK', 586, 92, 1),
(163, 'PW', 'PALAU', 'Palau', 'PLW', 585, 680, 1),
(164, 'PS', 'PALESTINIAN TERRITORY, OCCUPIED', 'Palestinian Territory, Occupied', NULL, NULL, 970, 1),
(165, 'PA', 'PANAMA', 'Panama', 'PAN', 591, 507, 1),
(166, 'PG', 'PAPUA NEW GUINEA', 'Papua New Guinea', 'PNG', 598, 675, 1),
(167, 'PY', 'PARAGUAY', 'Paraguay', 'PRY', 600, 595, 1),
(168, 'PE', 'PERU', 'Peru', 'PER', 604, 51, 1),
(169, 'PH', 'PHILIPPINES', 'Philippines', 'PHL', 608, 63, 1),
(170, 'PN', 'PITCAIRN', 'Pitcairn', 'PCN', 612, 0, 1),
(171, 'PL', 'POLAND', 'Poland', 'POL', 616, 48, 1),
(172, 'PT', 'PORTUGAL', 'Portugal', 'PRT', 620, 351, 1),
(173, 'PR', 'PUERTO RICO', 'Puerto Rico', 'PRI', 630, 1787, 1),
(174, 'QA', 'QATAR', 'Qatar', 'QAT', 634, 974, 1),
(175, 'RE', 'REUNION', 'Reunion', 'REU', 638, 262, 1),
(176, 'RO', 'ROMANIA', 'Romania', 'ROM', 642, 40, 1),
(177, 'RU', 'RUSSIAN FEDERATION', 'Russian Federation', 'RUS', 643, 70, 1),
(178, 'RW', 'RWANDA', 'Rwanda', 'RWA', 646, 250, 1),
(179, 'SH', 'SAINT HELENA', 'Saint Helena', 'SHN', 654, 290, 1),
(180, 'KN', 'SAINT KITTS AND NEVIS', 'Saint Kitts and Nevis', 'KNA', 659, 1869, 1),
(181, 'LC', 'SAINT LUCIA', 'Saint Lucia', 'LCA', 662, 1758, 1),
(182, 'PM', 'SAINT PIERRE AND MIQUELON', 'Saint Pierre and Miquelon', 'SPM', 666, 508, 1),
(183, 'VC', 'SAINT VINCENT AND THE GRENADINES', 'Saint Vincent and the Grenadines', 'VCT', 670, 1784, 1),
(184, 'WS', 'SAMOA', 'Samoa', 'WSM', 882, 684, 1),
(185, 'SM', 'SAN MARINO', 'San Marino', 'SMR', 674, 378, 1),
(186, 'ST', 'SAO TOME AND PRINCIPE', 'Sao Tome and Principe', 'STP', 678, 239, 1),
(187, 'SA', 'SAUDI ARABIA', 'Saudi Arabia', 'SAU', 682, 966, 1),
(188, 'SN', 'SENEGAL', 'Senegal', 'SEN', 686, 221, 1),
(189, 'CS', 'SERBIA AND MONTENEGRO', 'Serbia and Montenegro', NULL, NULL, 381, 1),
(190, 'SC', 'SEYCHELLES', 'Seychelles', 'SYC', 690, 248, 1),
(191, 'SL', 'SIERRA LEONE', 'Sierra Leone', 'SLE', 694, 232, 1),
(192, 'SG', 'SINGAPORE', 'Singapore', 'SGP', 702, 65, 1),
(193, 'SK', 'SLOVAKIA', 'Slovakia', 'SVK', 703, 421, 1),
(194, 'SI', 'SLOVENIA', 'Slovenia', 'SVN', 705, 386, 1),
(195, 'SB', 'SOLOMON ISLANDS', 'Solomon Islands', 'SLB', 90, 677, 1),
(196, 'SO', 'SOMALIA', 'Somalia', 'SOM', 706, 252, 1),
(197, 'ZA', 'SOUTH AFRICA', 'South Africa', 'ZAF', 710, 27, 1),
(198, 'GS', 'SOUTH GEORGIA AND THE SOUTH SANDWICH ISLANDS', 'South Georgia and the South Sandwich Islands', NULL, NULL, 0, 1),
(199, 'ES', 'SPAIN', 'Spain', 'ESP', 724, 34, 1),
(200, 'LK', 'SRI LANKA', 'Sri Lanka', 'LKA', 144, 94, 1),
(201, 'SD', 'SUDAN', 'Sudan', 'SDN', 736, 249, 1),
(202, 'SR', 'SURINAME', 'Suriname', 'SUR', 740, 597, 1),
(203, 'SJ', 'SVALBARD AND JAN MAYEN', 'Svalbard and Jan Mayen', 'SJM', 744, 47, 1),
(204, 'SZ', 'SWAZILAND', 'Swaziland', 'SWZ', 748, 268, 1),
(205, 'SE', 'SWEDEN', 'Sweden', 'SWE', 752, 46, 1),
(206, 'CH', 'SWITZERLAND', 'Switzerland', 'CHE', 756, 41, 1),
(207, 'SY', 'SYRIAN ARAB REPUBLIC', 'Syrian Arab Republic', 'SYR', 760, 963, 1),
(208, 'TW', 'TAIWAN, PROVINCE OF CHINA', 'Taiwan, Province of China', 'TWN', 158, 886, 1),
(209, 'TJ', 'TAJIKISTAN', 'Tajikistan', 'TJK', 762, 992, 1),
(210, 'TZ', 'TANZANIA, UNITED REPUBLIC OF', 'Tanzania, United Republic of', 'TZA', 834, 255, 1),
(211, 'TH', 'THAILAND', 'Thailand', 'THA', 764, 66, 1),
(212, 'TL', 'TIMOR-LESTE', 'Timor-Leste', NULL, NULL, 670, 1),
(213, 'TG', 'TOGO', 'Togo', 'TGO', 768, 228, 1),
(214, 'TK', 'TOKELAU', 'Tokelau', 'TKL', 772, 690, 1),
(215, 'TO', 'TONGA', 'Tonga', 'TON', 776, 676, 1),
(216, 'TT', 'TRINIDAD AND TOBAGO', 'Trinidad and Tobago', 'TTO', 780, 1868, 1),
(217, 'TN', 'TUNISIA', 'Tunisia', 'TUN', 788, 216, 1),
(218, 'TR', 'TURKEY', 'Turkey', 'TUR', 792, 90, 1),
(219, 'TM', 'TURKMENISTAN', 'Turkmenistan', 'TKM', 795, 7370, 1),
(220, 'TC', 'TURKS AND CAICOS ISLANDS', 'Turks and Caicos Islands', 'TCA', 796, 1649, 1),
(221, 'TV', 'TUVALU', 'Tuvalu', 'TUV', 798, 688, 1),
(222, 'UG', 'UGANDA', 'Uganda', 'UGA', 800, 256, 1),
(223, 'UA', 'UKRAINE', 'Ukraine', 'UKR', 804, 380, 1),
(224, 'AE', 'UNITED ARAB EMIRATES', 'United Arab Emirates', 'ARE', 784, 971, 1),
(225, 'GB', 'UNITED KINGDOM', 'United Kingdom', 'GBR', 826, 44, 1),
(226, 'US', 'UNITED STATES', 'United States', 'USA', 840, 1, 1),
(227, 'UM', 'UNITED STATES MINOR OUTLYING ISLANDS', 'United States Minor Outlying Islands', NULL, NULL, 1, 1),
(228, 'UY', 'URUGUAY', 'Uruguay', 'URY', 858, 598, 1),
(229, 'UZ', 'UZBEKISTAN', 'Uzbekistan', 'UZB', 860, 998, 1),
(230, 'VU', 'VANUATU', 'Vanuatu', 'VUT', 548, 678, 1),
(231, 'VE', 'VENEZUELA', 'Venezuela', 'VEN', 862, 58, 1),
(232, 'VN', 'VIET NAM', 'Viet Nam', 'VNM', 704, 84, 1),
(233, 'VG', 'VIRGIN ISLANDS, BRITISH', 'Virgin Islands, British', 'VGB', 92, 1284, 1),
(234, 'VI', 'VIRGIN ISLANDS, U.S.', 'Virgin Islands, U.s.', 'VIR', 850, 1340, 1),
(235, 'WF', 'WALLIS AND FUTUNA', 'Wallis and Futuna', 'WLF', 876, 681, 1),
(236, 'EH', 'WESTERN SAHARA', 'Western Sahara', 'ESH', 732, 212, 1),
(237, 'YE', 'YEMEN', 'Yemen', 'YEM', 887, 967, 1),
(238, 'ZM', 'ZAMBIA', 'Zambia', 'ZMB', 894, 260, 1),
(239, 'ZW', 'ZIMBABWE', 'Zimbabwe', 'ZWE', 716, 263, 1);

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
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=25 ;


CREATE TABLE IF NOT EXISTS `admin_users` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `name` varchar(255) COLLATE utf8_unicode_ci NOT NULL,
  `email` varchar(255) COLLATE utf8_unicode_ci NOT NULL,
  `password` varchar(60) COLLATE utf8_unicode_ci NOT NULL,
  `remember_token` varchar(100) COLLATE utf8_unicode_ci DEFAULT NULL,
  `created_at` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `updated_at` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  PRIMARY KEY (`id`),
  UNIQUE KEY `admin_users_email_unique` (`email`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci AUTO_INCREMENT=5 ;

--
-- Dumping data for table `login`


--
-- Table structure for table `service_provider`
--

CREATE TABLE IF NOT EXISTS `service_provider` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `name` varchar(50) NOT NULL COMMENT '1 = Telegram , 2 =  Whats App, 3 = Facebook, 4 = Instragram, 5 = DropBox, 6 = picasa, 7 = flicker , 8 = desktop',
  `created_by` int(11) NOT NULL,
  `created_date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`),
  KEY `service_provider_user` (`created_by`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=9 ;

--
-- Dumping data for table `service_provider`
--

INSERT INTO `service_provider` (`id`, `name`, `created_by`, `created_date`) VALUES
(1, 'Telegram', 0, '2015-07-30 06:28:25'),
(2, 'Whats App', 0, '2015-07-30 06:28:42'),
(3, 'Facebook', 0, '2015-09-16 06:10:50'),
(4, 'Instragram', 0, '2015-09-16 06:10:50'),
(5, 'DropBox', 0, '2015-09-16 06:11:21'),
(6, 'Picasa', 0, '2015-09-16 06:11:21'),
(7, 'Flicker', 0, '2015-09-16 06:11:44'),
(8, 'Desktop', 0, '2015-09-16 06:11:44');

-- --------------------------------------------------------

--
-- Table structure for table `user`
--

CREATE TABLE IF NOT EXISTS `user` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `first_name` varchar(50) NOT NULL,
  `last_name` varchar(100) NOT NULL,
  `gender` varchar(10) NOT NULL,
  `dob` date DEFAULT NULL,
  `created_date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=21 ;

--
-- Dumping data for table `user`
--

-- --------------------------------------------------------

--
-- Table structure for table `user_service`
--

CREATE TABLE IF NOT EXISTS `user_service` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `service_user_id` varchar(50) DEFAULT NULL,
  `service_provider_id` int(11) NOT NULL,
  `u_id` int(11) NOT NULL,
  `active` int(11) NOT NULL,
  `created_date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`),
  KEY `user_service_service_provider` (`service_provider_id`),
  KEY `user_service_user` (`u_id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=24 ;

--
-- Dumping data for table `user_service`
--

-- --------------------------------------------------------

--
-- Table structure for table `user_service_data`
--

CREATE TABLE IF NOT EXISTS `user_service_data` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `user_service_id` int(11) NOT NULL,
  `media_file_path` varchar(100) NOT NULL,
  `others_obj` text NOT NULL,
  `created_date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=121 ;

--
-- Dumping data for table `user_service_data`
--


/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
