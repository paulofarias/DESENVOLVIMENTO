-- --------------------------------------------------------
-- Servidor:                     127.0.0.1
-- Versão do servidor:           5.1.45-community - MySQL Community Server (GPL)
-- OS do Servidor:               Win32
-- HeidiSQL Versão:              9.3.0.4984
-- --------------------------------------------------------

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET NAMES utf8 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;

-- Copiando estrutura para tabela financeiro.caixa
CREATE TABLE IF NOT EXISTS `caixa` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `numero_doc` varchar(20) NOT NULL,
  `descricao` varchar(200) DEFAULT NULL,
  `valor` decimal(18,2) NOT NULL,
  `tipo` char(1) NOT NULL,
  `dt_cadastro` date DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=latin1;

-- Copiando dados para a tabela financeiro.caixa: ~3 rows (aproximadamente)
/*!40000 ALTER TABLE `caixa` DISABLE KEYS */;
INSERT INTO `caixa` (`id`, `numero_doc`, `descricao`, `valor`, `tipo`, `dt_cadastro`) VALUES
	(4, '123123', 'Conta', 100.00, 'C', '2013-09-28'),
	(5, '123/A', 'Compra de um telefone na Submarino', 1000.00, 'D', NULL),
	(6, '2121', '21212', 100.00, 'C', '2013-11-07');
/*!40000 ALTER TABLE `caixa` ENABLE KEYS */;


-- Copiando estrutura para tabela financeiro.contas_pagar
CREATE TABLE IF NOT EXISTS `contas_pagar` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `numero_doc` varchar(20) NOT NULL,
  `descricao` varchar(200) DEFAULT NULL,
  `parcela` int(11) NOT NULL,
  `vlr_parcela` decimal(18,2) NOT NULL,
  `vlr_compra` decimal(18,2) NOT NULL,
  `vlr_abatido` decimal(18,2) NOT NULL,
  `dt_compra` date NOT NULL,
  `dt_cadastro` date NOT NULL,
  `dt_vencimento` date NOT NULL,
  `dt_pagamento` date DEFAULT NULL,
  `status` char(1) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=14 DEFAULT CHARSET=latin1;

-- Copiando dados para a tabela financeiro.contas_pagar: ~13 rows (aproximadamente)
/*!40000 ALTER TABLE `contas_pagar` DISABLE KEYS */;
INSERT INTO `contas_pagar` (`id`, `numero_doc`, `descricao`, `parcela`, `vlr_parcela`, `vlr_compra`, `vlr_abatido`, `dt_compra`, `dt_cadastro`, `dt_vencimento`, `dt_pagamento`, `status`) VALUES
	(1, 'dssadsd', 'sds', 2, 50.00, 100.00, 0.00, '2013-11-27', '2013-11-27', '2014-01-26', NULL, 'A'),
	(2, 'qs', 'ssasa', 2, 50.00, 100.00, 0.00, '2013-11-27', '2013-11-27', '2014-01-26', NULL, 'A'),
	(3, 'sdasa', 'sasa', 2, 50.00, 100.00, 0.00, '2013-11-27', '2013-11-27', '2014-01-26', NULL, 'A'),
	(4, 'sdasa', 'sasa', 1, 50.00, 100.00, 0.00, '2013-11-27', '2013-11-27', '2013-12-27', NULL, 'A'),
	(5, 'BB', 'Compra da casa', 10, 1000.00, 10000.00, 0.00, '2013-11-27', '2013-11-27', '2014-06-15', NULL, 'A'),
	(6, 'BB', 'Compra da casa', 9, 1000.00, 10000.00, 0.00, '2013-11-27', '2013-11-27', '2014-05-26', NULL, 'A'),
	(7, 'BB', 'Compra da casa', 8, 1000.00, 10000.00, 0.00, '2013-11-27', '2013-11-27', '2014-05-06', NULL, 'A'),
	(8, 'BB', 'Compra da casa', 7, 1000.00, 10000.00, 0.00, '2013-11-27', '2013-11-27', '2014-04-16', NULL, 'A'),
	(9, 'BB', 'Compra da casa', 6, 1000.00, 10000.00, 0.00, '2013-11-27', '2013-11-27', '2014-03-27', NULL, 'A'),
	(10, 'BB', 'Compra da casa', 5, 1000.00, 10000.00, 0.00, '2013-11-27', '2013-11-27', '2014-03-07', NULL, 'A'),
	(11, 'BB', 'Compra da casa', 4, 1000.00, 10000.00, 0.00, '2013-11-27', '2013-11-27', '2014-02-15', NULL, 'A'),
	(12, 'BB', 'Compra da casa', 3, 1000.00, 10000.00, 0.00, '2013-11-27', '2013-11-27', '2014-01-26', NULL, 'A'),
	(13, 'BB', 'Compra da casa', 2, 1000.00, 10000.00, 0.00, '2013-11-27', '2013-11-27', '2014-01-06', NULL, 'C');
/*!40000 ALTER TABLE `contas_pagar` ENABLE KEYS */;


-- Copiando estrutura para tabela financeiro.contas_receber
CREATE TABLE IF NOT EXISTS `contas_receber` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `documento` varchar(20) NOT NULL,
  `descricao` varchar(200) DEFAULT NULL,
  `parcela` int(11) NOT NULL,
  `vlr_parcela` decimal(18,2) NOT NULL,
  `vlr_compra` decimal(18,2) NOT NULL,
  `vlr_abatido` decimal(18,2) NOT NULL,
  `dt_compra` date NOT NULL,
  `dt_vencimento` date NOT NULL,
  `dt_cadastro` date NOT NULL,
  `status` char(1) NOT NULL,
  `dt_pagamento` date DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=latin1;

-- Copiando dados para a tabela financeiro.contas_receber: ~3 rows (aproximadamente)
/*!40000 ALTER TABLE `contas_receber` DISABLE KEYS */;
INSERT INTO `contas_receber` (`id`, `documento`, `descricao`, `parcela`, `vlr_parcela`, `vlr_compra`, `vlr_abatido`, `dt_compra`, `dt_vencimento`, `dt_cadastro`, `status`, `dt_pagamento`) VALUES
	(1, 'A', 'aaa', 3, 33.33, 100.00, 0.00, '2013-12-10', '2014-03-10', '2013-12-10', 'A', NULL),
	(2, 'A', 'aaa', 2, 33.33, 100.00, 0.00, '2013-12-10', '2014-02-08', '2013-12-10', 'A', NULL),
	(3, 'A', 'aaa', 1, 33.33, 100.00, 0.00, '2013-12-10', '2014-01-09', '2013-12-10', 'A', NULL);
/*!40000 ALTER TABLE `contas_receber` ENABLE KEYS */;


-- Copiando estrutura para tabela financeiro.pagar_detalhes
CREATE TABLE IF NOT EXISTS `pagar_detalhes` (
  `id` int(10) NOT NULL AUTO_INCREMENT,
  `id_pagar` int(10) NOT NULL,
  `detalhes` varchar(255) NOT NULL,
  `valor` decimal(18,2) NOT NULL,
  `data` date NOT NULL,
  `usuario` varchar(50) NOT NULL,
  PRIMARY KEY (`id`),
  KEY `fk_pagar_detalhes` (`id_pagar`),
  CONSTRAINT `fk_pagar_detalhes` FOREIGN KEY (`id_pagar`) REFERENCES `contas_pagar` (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- Copiando dados para a tabela financeiro.pagar_detalhes: ~0 rows (aproximadamente)
/*!40000 ALTER TABLE `pagar_detalhes` DISABLE KEYS */;
/*!40000 ALTER TABLE `pagar_detalhes` ENABLE KEYS */;


-- Copiando estrutura para tabela financeiro.receber_detalhes
CREATE TABLE IF NOT EXISTS `receber_detalhes` (
  `id` int(10) NOT NULL AUTO_INCREMENT,
  `id_receber` int(10) NOT NULL,
  `detalhes` varchar(255) NOT NULL,
  `valor` decimal(18,2) NOT NULL,
  `data` date NOT NULL,
  `usuario` varchar(50) NOT NULL,
  PRIMARY KEY (`id`),
  KEY `fk_receber_datelhes` (`id_receber`),
  CONSTRAINT `fk_receber_datelhes` FOREIGN KEY (`id_receber`) REFERENCES `contas_receber` (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- Copiando dados para a tabela financeiro.receber_detalhes: ~0 rows (aproximadamente)
/*!40000 ALTER TABLE `receber_detalhes` DISABLE KEYS */;
/*!40000 ALTER TABLE `receber_detalhes` ENABLE KEYS */;


-- Copiando estrutura para tabela financeiro.usuarios
CREATE TABLE IF NOT EXISTS `usuarios` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `nome` varchar(50) NOT NULL,
  `login` varchar(20) NOT NULL,
  `senha` varchar(20) NOT NULL,
  `status` char(1) NOT NULL,
  `dt_cadastro` date NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=latin1;

-- Copiando dados para a tabela financeiro.usuarios: ~4 rows (aproximadamente)
/*!40000 ALTER TABLE `usuarios` DISABLE KEYS */;
INSERT INTO `usuarios` (`id`, `nome`, `login`, `senha`, `status`, `dt_cadastro`) VALUES
	(1, 'thiago', 'thiago', '123123', 'A', '2014-03-05'),
	(2, 'roberto carlos', 'sdfsd', 'sdfsdfs', 'A', '2013-10-25'),
	(4, 'thiago', 'thiago1', '123123', 'A', '2013-10-19'),
	(5, 'thiago silva', '123123', '123123', 'A', '2013-10-25');
/*!40000 ALTER TABLE `usuarios` ENABLE KEYS */;
/*!40101 SET SQL_MODE=IFNULL(@OLD_SQL_MODE, '') */;
/*!40014 SET FOREIGN_KEY_CHECKS=IF(@OLD_FOREIGN_KEY_CHECKS IS NULL, 1, @OLD_FOREIGN_KEY_CHECKS) */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
