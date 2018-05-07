-- phpMyAdmin SQL Dump
-- version 4.8.0.1
-- https://www.phpmyadmin.net/
--
-- Host: localhost
-- Generation Time: 07-Maio-2018 às 23:26
-- Versão do servidor: 10.2.14-MariaDB
-- PHP Version: 7.2.4

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `aula`
--
CREATE DATABASE IF NOT EXISTS `aula` DEFAULT CHARACTER SET utf8 COLLATE utf8_general_ci;
USE `aula`;

-- --------------------------------------------------------

--
-- Estrutura da tabela `categoria`
--

CREATE TABLE `categoria` (
  `id_categoria` int(11) NOT NULL,
  `nome` varchar(45) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Extraindo dados da tabela `categoria`
--

INSERT INTO `categoria` (`id_categoria`, `nome`) VALUES
(1, '2º Grau');

-- --------------------------------------------------------

--
-- Estrutura da tabela `diretor`
--

CREATE TABLE `diretor` (
  `id_diretor` int(11) NOT NULL,
  `nome` varchar(45) DEFAULT NULL,
  `diretorcol` varchar(45) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Extraindo dados da tabela `diretor`
--

INSERT INTO `diretor` (`id_diretor`, `nome`, `diretorcol`) VALUES
(1, 'Marcelo', NULL),
(2, 'Ana', NULL);

-- --------------------------------------------------------

--
-- Estrutura da tabela `escola`
--

CREATE TABLE `escola` (
  `id_escola` int(11) NOT NULL,
  `nome` varchar(45) DEFAULT NULL,
  `telefone` varchar(45) DEFAULT NULL,
  `endereco` varchar(45) DEFAULT NULL,
  `email` varchar(45) DEFAULT NULL,
  `diretor_id_diretor` int(11) NOT NULL,
  `categoria_id_categoria` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Extraindo dados da tabela `escola`
--

INSERT INTO `escola` (`id_escola`, `nome`, `telefone`, `endereco`, `email`, `diretor_id_diretor`, `categoria_id_categoria`) VALUES
(1, 'Collégio estudal do sol', '36202255', 'Rua Augusta bastos 1000', 'sol@sol.edu.br', 2, 1);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `categoria`
--
ALTER TABLE `categoria`
  ADD PRIMARY KEY (`id_categoria`);

--
-- Indexes for table `diretor`
--
ALTER TABLE `diretor`
  ADD PRIMARY KEY (`id_diretor`);

--
-- Indexes for table `escola`
--
ALTER TABLE `escola`
  ADD PRIMARY KEY (`id_escola`),
  ADD KEY `fk_escola_diretor_idx` (`diretor_id_diretor`),
  ADD KEY `fk_escola_categoria1_idx` (`categoria_id_categoria`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `categoria`
--
ALTER TABLE `categoria`
  MODIFY `id_categoria` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;

--
-- AUTO_INCREMENT for table `diretor`
--
ALTER TABLE `diretor`
  MODIFY `id_diretor` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;

--
-- AUTO_INCREMENT for table `escola`
--
ALTER TABLE `escola`
  MODIFY `id_escola` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;

--
-- Constraints for dumped tables
--

--
-- Limitadores para a tabela `escola`
--
ALTER TABLE `escola`
  ADD CONSTRAINT `fk_escola_categoria1` FOREIGN KEY (`categoria_id_categoria`) REFERENCES `categoria` (`id_categoria`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  ADD CONSTRAINT `fk_escola_diretor` FOREIGN KEY (`diretor_id_diretor`) REFERENCES `diretor` (`id_diretor`) ON DELETE NO ACTION ON UPDATE NO ACTION;
--
-- Database: `aula2`
--
CREATE DATABASE IF NOT EXISTS `aula2` DEFAULT CHARACTER SET latin1 COLLATE latin1_swedish_ci;
USE `aula2`;

-- --------------------------------------------------------

--
-- Estrutura da tabela `fornecedor`
--

CREATE TABLE `fornecedor` (
  `id_fornecedor` int(11) NOT NULL,
  `nome` varchar(400) NOT NULL,
  `cnpj` varchar(30) NOT NULL,
  `razao_social` varchar(400) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Extraindo dados da tabela `fornecedor`
--

INSERT INTO `fornecedor` (`id_fornecedor`, `nome`, `cnpj`, `razao_social`) VALUES
(1, 'Nike', '12.321.321/0001-98', 'Nike Cartel Store'),
(2, 'PUMA DO MAL ', '11.321.321/0001-97', 'RV PUMA S/A'),
(3, 'Mabel', '01.123.456-7812.33', 'Mabel LTDA');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `fornecedor`
--
ALTER TABLE `fornecedor`
  ADD PRIMARY KEY (`id_fornecedor`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `fornecedor`
--
ALTER TABLE `fornecedor`
  MODIFY `id_fornecedor` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;
--
-- Database: `php1`
--
CREATE DATABASE IF NOT EXISTS `php1` DEFAULT CHARACTER SET latin1 COLLATE latin1_swedish_ci;
USE `php1`;

-- --------------------------------------------------------

--
-- Estrutura da tabela `Aluno`
--

CREATE TABLE `Aluno` (
  `id` int(11) NOT NULL,
  `nome` varchar(400) NOT NULL,
  `email` varchar(400) NOT NULL,
  `telefone` varchar(30) NOT NULL,
  `matricula` varchar(30) NOT NULL,
  `curso` varchar(20) NOT NULL,
  `periodo` int(11) NOT NULL COMMENT '1 para matutino; 2 - para vespertino; 3 para noturno',
  `instituicao` varchar(30) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Extraindo dados da tabela `Aluno`
--

INSERT INTO `Aluno` (`id`, `nome`, `email`, `telefone`, `matricula`, `curso`, `periodo`, `instituicao`) VALUES
(1, 'marlus dias', 'marlus.guitar@gmail.com', '981337874', '2018000212', 'Eng Elétrica', 3, 'UFU'),
(2, 'marlus dias', 'marlus.guitar@gmail.com', '981337874', '2018000212', 'Eng ElÃ©trica', 3, 'UFU'),
(3, 'Marcelo Bueno', 'marcelo@gmail.com', '36225588', '2010002211', 'MÃ¡quiagem', 1, 'Senac');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `Aluno`
--
ALTER TABLE `Aluno`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `Aluno`
--
ALTER TABLE `Aluno`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;
--
-- Database: `test`
--
CREATE DATABASE IF NOT EXISTS `test` DEFAULT CHARACTER SET latin1 COLLATE latin1_swedish_ci;
USE `test`;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
