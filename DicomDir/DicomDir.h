/********************************************************************************/
/*                                                                              */
/* Papyrus 3 library.                                                           */
/* This library constitutes a DICOM file system which helps reading and writing */
/* DICOM files and DICOMDIR files.                                              */
/*                                                                              */
/* Copyright (C) 2004 - Service of  Medical Informatics -                       */
/* University Hospitals of Geneva (HUG), Geneva, Switzerland                    */
/*                                                                              */
/* This library is a free software; you can redistribute it and/or modify it    */
/* under the terms of the GNU Lesser General Public License as published by the */
/*  Free Software Foundation; either version 2.1 of the License, or             */
/* (at your option) any later version.                                          */
/*                                                                              */
/* This library is distributed in the hope that it will be useful,              */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of               */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.                         */
/* See the GNU Lesser General Public License for more details.                  */
/*                                                                              */
/* You should have received a copy of the GNU Lesser General Public License     */
/* along with this library; if not, write to                                    */
/* the Free Software Foundation, Inc.,                                          */
/* 59 Temple Place, Suite 330,                                                  */
/* Boston, MA 02111-1307 USA                                                    */
/*                                                                              */
/* You can contact us for more information at osiris@sim.hcuge.ch               */
/* or by writing to Papyrus,                                                    */
/* Unite d'Imagerie Numerique / Service d'Informatique Medicale / HUG,          */
/* 24, Micheli-du-Crest street, 1211 Geneva 14, Switzerland.                    */
/*                                                                              */
/* The University Hopitals of Geneva, hereby disclaims all copyright interest   */
/* in the library `Papyrus' (a library for reading and writing DICOM files).    */
/*                                                                              */
/* Geneva, april 2004                                                           */
/* Antoine Geissbuhler, head of the Service of Medical Informatics,             */
/* University Hospitals of Geneva, Switzerland                                  */
/*                                                                              */
/********************************************************************************/

/********************************************************************************/
/*                                                                              */
/*	Project  : P A P Y R U S  Toolkit (DicomDir library)                        */
/*	File     : Dicomdir.h                                                       */
/*	Function : contains the declarations of types, enumerated types,            */
/*             constants and global variables                                   */
/*	Authors  : Mathieu Funk                                                     */
/*             Christian Girard                                                 */
/*             Jean-Francois Vurlod                                             */
/*             Marianne Logean                                                  */
/*                                                                              */
/*	History  : 05.1997	version 3.5                                             */
/*             02.1999	version 3.6                                             */
/*                                                                              */
/********************************************************************************/

#ifndef DicomdirH 
#define DicomdirH

#ifndef Papyrus3H 
#include "Papyrus3.h"
#endif
		
/* --- includes --- */

#ifndef FILENAME83		    /* this is for the normal machines ... */

#ifndef DicomdirEnumRecordsH 
#include "DicomDirEnumRecords.h"
#endif
#ifndef DicomdirTypeDef3H	    /* DICOMDIR type definition */
#include "DicomDirTypeDef3.h"
#endif
#ifndef DicomdirPrivFunctionDef3H   /* DICOMDIR private functions */
#include "DicomDirPrivFunctionDef3.h"
#endif
#ifndef DicomdirPubFunctionDef3H    /* DICOMDIR public functions */
#include "DicomDirPubFunctionDef3.h"
#endif
#ifndef DicomdirGlobalVar3H         /* DICOMDIR global variables */
#include "DicomDirGlobalVar3.h"
#endif

#else				    /* FILENAME83 defined for the DOS machines */

#ifndef DicomdirEnumRecordsH 
#include "DICDER3.h"
#endif
#ifndef DicomdirTypeDef3H	    /* DICOMDIR type definition */
#include "DICDTD3.h"
#endif
#ifndef DicomdirPrivFunctionDef3H   /* DICOMDIR private functions */
#include "DICDPRF3.h"
#endif
#ifndef DicomdirPubFunctionDef3H    /* DICOMDIR public functions */
#include "DICDPUF3.h"
#endif
#ifndef DicomdirGlobalVar3H         /* DICOMDIR global variables */
#include "DICDGLV3.h"
#endif

#endif 				    /* FILENAME83 defined */



#endif	    /* DicomdirH */

