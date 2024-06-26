﻿using Practics_Model.Entities.Abstracts;
using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
#nullable disable

namespace Practics_Model.Entities.Concretes;

public class Faculty : BaseEntity
{
    [Required]
    [StringLength(20)]
    public string Name { get; set; }
}
