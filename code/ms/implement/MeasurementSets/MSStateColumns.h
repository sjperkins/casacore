//# NewMSStateColumns.h: provides easy access to NewMSState columns
//# Copyright (C) 1999,2000
//# Associated Universities, Inc. Washington DC, USA.
//#
//# This library is free software; you can redistribute it and/or modify it
//# under the terms of the GNU Library General Public License as published by
//# the Free Software Foundation; either version 2 of the License, or (at your
//# option) any later version.
//#
//# This library is distributed in the hope that it will be useful, but WITHOUT
//# ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
//# FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public
//# License for more details.
//#
//# You should have received a copy of the GNU Library General Public License
//# along with this library; if not, write to the Free Software Foundation,
//# Inc., 675 Massachusetts Ave, Cambridge, MA 02139, USA.
//#
//# Correspondence concerning AIPS++ should be addressed as follows:
//#        Internet email: aips2-request@nrao.edu.
//#        Postal address: AIPS++ Project Office
//#                        National Radio Astronomy Observatory
//#                        520 Edgemont Road
//#                        Charlottesville, VA 22903-2475 USA
//#
//# $Id$

#if !defined(AIPS_NEWMSSTATECOLUMNS_H)
#define AIPS_NEWMSSTATECOLUMNS_H

#include <aips/aips.h>
#include <aips/Tables/ScalarColumn.h>
#include <aips/TableMeasures/ScalarQuantColumn.h>
#include <aips/Utilities/String.h>

class NewMSState;

// <summary>
// A class to provide easy read-only access to NewMSState columns
// </summary>

// <use visibility=export>

// <reviewed reviewer="Bob Garwood" date="1997/02/01" tests="" demos="">
// </reviewed>

// <prerequisite>
//   <li> NewMSState
//   <li> ScalarColumn
// </prerequisite>
//
// <etymology>
// RONewMSStateColumns stands for Read-Only NewMeasurementSet State Table columns.
// </etymology>
//
// <synopsis>
// This class provides read-only access to the columns in the NewMSState Table.
// It does the declaration of all the Scalar and ArrayColumns with the
// correct types, so the application programmer doesn't have to
// worry about getting those right. There is an access function
// for every predefined column. Access to non-predefined columns will still
// have to be done with explicit declarations.
// See <linkto class=RONewMSColumns> RONewMSColumns</linkto> for an example.
// </synopsis>
//
// <motivation>
// See <linkto class=NewMSColumns> NewMSColumns</linkto> for the motivation.
// </motivation>

class RONewMSStateColumns
{
public:
  // Create a columns object that accesses the data in the specified Table
  RONewMSStateColumns(const NewMSState& msState);

  // The destructor does nothing special
  ~RONewMSStateColumns();

  // Access to required columns
  // <group>
  const ROScalarColumn<Double>& cal() const {return cal_p;}
  const ROScalarQuantColumn<Double>& calQuant() const { return calQuant_p;}
  const ROScalarColumn<Bool>& flagRow() const {return flagRow_p;}
  const ROScalarColumn<Double>& load() const {return load_p;}
  const ROScalarQuantColumn<Double>& loadQuant() const { return loadQuant_p;}
  const ROScalarColumn<String>& obsMode() const {return obsMode_p;}
  const ROScalarColumn<Bool>& ref() const {return ref_p;}
  const ROScalarColumn<Bool>& sig() const {return sig_p;}
  const ROScalarColumn<Int>& subScan() const {return subScan_p;}
  // </group>

protected:
  //# default constructor creates a object that is not usable. Use the attach
  //# function correct this.
  RONewMSStateColumns();

  //# attach this object to the supplied table.
  void attach(const NewMSState& msState);

private:
  //# Make the assignment operator and the copy constructor private to prevent
  //# any compiler generated one from being used.
  RONewMSStateColumns(const RONewMSStateColumns&);
  RONewMSStateColumns& operator=(const RONewMSStateColumns&);

  //# required columns
  ROScalarColumn<Double> cal_p;
  ROScalarColumn<Bool> flagRow_p;
  ROScalarColumn<Double> load_p;
  ROScalarColumn<String> obsMode_p;
  ROScalarColumn<Bool> ref_p;
  ROScalarColumn<Bool> sig_p;
  ROScalarColumn<Int> subScan_p;

  //# Access to Quantum columns
  ROScalarQuantColumn<Double> calQuant_p;
  ROScalarQuantColumn<Double> loadQuant_p;

};

// <summary>
// A class to provide easy read-write access to NewMSState columns
// </summary>

// <use visibility=export>

// <reviewed reviewer="Bob Garwood" date="1997/02/01" tests="" demos="">
// </reviewed>

// <prerequisite>
//   <li> NewMSState
//   <li> ScalarColumn
// </prerequisite>
//
// <etymology>
// NewMSStateColumns stands for NewMeasurementSet State Table columns.
// </etymology>
//
// <synopsis>
// This class provides access to the columns in the NewMSState Table,
// it does the declaration of all the Scalar and ArrayColumns with the
// correct types, so the application programmer doesn't have to
// worry about getting those right. There is an access function
// for every predefined column. Access to non-predefined columns will still
// have to be done with explicit declarations.
// See <linkto class=NewMSColumns> NewMSColumns</linkto> for an example.
// </synopsis>
//
// <motivation>
// See <linkto class=NewMSColumns> NewMSColumns</linkto> for the motivation.
// </motivation>

class NewMSStateColumns: public RONewMSStateColumns
{
public:
  // Create a columns object that accesses the data in the specified Table
  NewMSStateColumns(NewMSState& msState);

  // The destructor does nothing special
  ~NewMSStateColumns();

  // Read-write access to required columns
  // <group>
  ScalarColumn<Double>& cal() {return cal_p;}
  ScalarQuantColumn<Double>& calQuant() { return calQuant_p;}
  ScalarColumn<Bool>& flagRow() {return flagRow_p;}
  ScalarColumn<Double>& load() {return load_p;}
  ScalarQuantColumn<Double>& loadQuant() { return loadQuant_p;}
  ScalarColumn<String>& obsMode() {return obsMode_p;}
  ScalarColumn<Bool>& ref() {return ref_p;}
  ScalarColumn<Bool>& sig() {return sig_p;}
  ScalarColumn<Int>& subScan() {return subScan_p;}
  // </group>

  // Read-only access to required columns
  // <group>
  // </group>

protected:
  //# default constructor creates a object that is not usable. Use the attach
  //# function correct this.
  NewMSStateColumns();

  //# attach this object to the supplied table.
  void attach(NewMSState& msState);

private:
  //# Make the assignment operator and the copy constructor private to prevent
  //# any compiler generated one from being used.
  NewMSStateColumns(const NewMSStateColumns&);
  NewMSStateColumns& operator=(const NewMSStateColumns&);

  //# required columns
  ScalarColumn<Double> cal_p;
  ScalarColumn<Bool> flagRow_p;
  ScalarColumn<Double> load_p;
  ScalarColumn<String> obsMode_p;
  ScalarColumn<Bool> ref_p;
  ScalarColumn<Bool> sig_p;
  ScalarColumn<Int> subScan_p;

  // Access to Quantum columns
  ScalarQuantColumn<Double> calQuant_p;
  ScalarQuantColumn<Double> loadQuant_p;
};
#endif
