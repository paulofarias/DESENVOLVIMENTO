//------------------------------------------------------------------------------
// <copyright file="WebDataService.cs" company="Microsoft">
//     Copyright (c) Microsoft Corporation.  All rights reserved.
// </copyright>
//------------------------------------------------------------------------------


// Guinther Pauli
// GPauli Cursos e Treinamentos
// Delphi Certified Professional - 3,5,6,7,2005,2006,Delphi Web,Kylix,XE
// Microsoft Certified Professional - MCP,MCAD,MCSD.NET,MCTS,MCPD (C#,ASP.NET, Arquitetura)
// Colaborador Editorial Revistas .net Magazine e ClubeDelphi
// MVP (Most Valuable Professional) - Embarcadero Technologies - US
// http://www.gpauli.com
// http://www.facebook.com/guintherpauli
// http://www.twitter.com/guintherpauli
// http://br.linkedin.com/in/guintherpauli
// Emails: guintherpauli@gmail.com; guinther@gpauli.com

using System;
using System.Data.Services;
using System.Data.Services.Common;
using System.Collections.Generic;
using System.Linq;
using System.ServiceModel.Web;
using Modelo;

public class WcfDataService : DataService<Modelo.ESTOQUEEntities>
{
    // This method is called only once to initialize service-wide policies.
    public static void InitializeService(DataServiceConfiguration config)
    {
        // TODO: set rules to indicate which entity sets and service operations are visible, updatable, etc.
        // Examples:
        config.SetEntitySetAccessRule("*", EntitySetRights.All);
        config.SetServiceOperationAccessRule("*", ServiceOperationRights.All);
        config.DataServiceBehavior.MaxProtocolVersion = DataServiceProtocolVersion.V3;
    }
}
