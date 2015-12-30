//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
//
// -------------------------------------------------------------------
//      GEANT4 Class file
//
// Hadron Kinetic Model
// p p -> Delta Delta* cross section tables
//
// -------------------------------------------------------------------

#include "globals.hh"
#include "G4ios.hh"
#include "G4SystemOfUnits.hh"
#include "G4XDeltaDeltastarTable.hh"
#include "G4PhysicsFreeVector.hh"

const G4int G4XDeltaDeltastarTable::sizeDeltaDeltastar = 121;

// Energies (GeV) corresponding to the cross section table
// Units are assigned when filling the PhysicsVector

const G4double G4XDeltaDeltastarTable::energyTable[121] =
{
  0.0, 
  2.014,  2.014,  2.016,  2.018,  2.022,  2.026,  2.031,  2.037,  2.044,  2.052,   
  2.061,  2.071,  2.082,  2.094,  2.107,  2.121,  2.135,  2.151,  2.168,  2.185,   
  2.204,  2.223,  2.244,  2.265,  2.287,  2.311,  2.335,  2.360,  2.386,  2.413,   
  2.441,  2.470,  2.500,  2.531,  2.562,  2.595,  2.629,  2.664,  2.699,  2.736,
  2.773,  2.812,  2.851,  2.891,  2.933,  2.975,  3.018,  3.062,  3.107,  3.153,   
  3.200,  3.248,  3.297,  3.347,  3.397,  3.449,  3.502,  3.555,  3.610,  3.666,   
  3.722,  3.779,  3.838,  3.897,  3.957,  4.018,  4.081,  4.144,  4.208,  4.273,   
  4.339,  4.406,  4.473,  4.542,  4.612,  4.683,  4.754,  4.827,  4.900,  4.975,
  5.000,  6.134,  7.269,  8.403,  9.538, 10.672, 11.807, 12.941, 14.076, 15.210,  
 16.345, 17.479, 18.613, 19.748, 20.882, 22.017, 23.151, 24.286, 25.420, 26.555, 
 27.689, 28.824, 29.958, 31.092, 32.227, 33.361, 34.496, 35.630, 36.765, 37.899,  
 39.034, 40.168, 41.303, 42.437, 43.571, 44.706, 45.840, 46.975, 48.109, 49.244
};

// Cross-sections in mb, from S.A. Bass et al., Prog.Part.Nucl.Phys.41:225-370,1998 
// Units are assigned when filling the PhysicsVector

const G4double G4XDeltaDeltastarTable::sigmaDD1600[121]= 
{
  0.0, 
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.001,  0.001,  0.002,  0.003,  0.005,  0.010,
  0.018,  0.000,  0.000,  0.003,  0.015,  0.045,  0.087,  0.134,
  0.183,  0.231,  0.277,  0.319,  0.359,  0.395,  0.429,  0.459,
  0.486,  0.510,  0.532,  0.551,  0.568,  0.582,  0.595,  0.605,
  0.614,  0.621,  0.626,  0.630,  0.633,  0.635,  0.635,  0.634,
  0.633,  0.630,  0.627,  0.623,  0.619,  0.614,  0.608,  0.602,
  0.600,  0.490,  0.391,  0.314,  0.259,  0.213,  0.178,  0.152,
  0.130,  0.113,  0.099,  0.088,  0.078,  0.070,  0.063,  0.057,
  0.052,  0.047,  0.043,  0.040,  0.037,  0.034,  0.031,  0.029,
  0.027,  0.026,  0.024,  0.023,  0.021,  0.020,  0.019,  0.018,
  0.017,  0.016,  0.015,  0.014,  0.014,  0.013,  0.013,  0.012 
};

const G4double G4XDeltaDeltastarTable::sigmaDD1620[121] = 
{
  0.0,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.001,  0.001,
  0.001,  0.002,  0.003,  0.004,  0.005,  0.007,  0.009,  0.014,
  0.000,  0.000,  0.001,  0.006,  0.020,  0.043,  0.070,  0.100,
  0.128,  0.156,  0.182,  0.207,  0.229,  0.249,  0.267,  0.284,
  0.299,  0.312,  0.324,  0.334,  0.343,  0.351,  0.357,  0.362,
  0.367,  0.370,  0.372,  0.374,  0.375,  0.375,  0.374,  0.373,
  0.372,  0.370,  0.367,  0.364,  0.361,  0.358,  0.354,  0.350,
  0.348,  0.280,  0.220,  0.176,  0.144,  0.117,  0.098,  0.091,
  0.071,  0.062,  0.054,  0.048,  0.042,  0.038,  0.034,  0.031,
  0.028,  0.025,  0.023,  0.021,  0.020,  0.018,  0.017,  0.016,
  0.015,  0.014,  0.013,  0.012,  0.011,  0.011,  0.010,  0.010,
  0.009,  0.009,  0.008,  0.008,  0.007,  0.007,  0.007,  0.006 
};

const G4double G4XDeltaDeltastarTable::sigmaDD1700[121] = 
{
  0.0,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.001,  0.001,  0.002,  0.004,  0.007,  0.012,
  0.019,  0.031,  0.000,  0.000,  0.001,  0.006,  0.021,  0.044,
  0.073,  0.103,  0.134,  0.164,  0.193,  0.220,  0.246,  0.269,
  0.291,  0.310,  0.328,  0.344,  0.358,  0.370,  0.381,  0.391,
  0.399,  0.405,  0.411,  0.416,  0.419,  0.421,  0.423,  0.424,
  0.424,  0.423,  0.422,  0.420,  0.418,  0.415,  0.412,  0.408,
  0.407,  0.335,  0.268,  0.215,  0.177,  0.145,  0.121,  0.103,
  0.088,  0.077,  0.067,  0.059,  0.053,  0.047,  0.042,  0.038,
  0.035,  0.032,  0.029,  0.027,  0.025,  0.023,  0.021,  0.020,
  0.018,  0.017,  0.016,  0.015,  0.014,  0.013,  0.013,  0.012,
  0.011,  0.011,  0.010,  0.010,  0.009,  0.009,  0.008,  0.008 
};


const G4double G4XDeltaDeltastarTable::sigmaDD1900[121] = 
{
  0.0,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.001,  0.001,  0.001,  0.001,  0.002,  0.002,  0.003,  0.003,
  0.004,  0.006,  0.007,  0.010,  0.000,  0.000,  0.000,  0.001,
  0.006,  0.014,  0.025,  0.036,  0.047,  0.058,  0.068,  0.077,
  0.086,  0.094,  0.101,  0.107,  0.113,  0.118,  0.122,  0.126,
  0.129,  0.132,  0.134,  0.136,  0.137,  0.138,  0.139,  0.140,
  0.140,  0.140,  0.139,  0.139,  0.138,  0.137,  0.136,  0.135,
  0.135,  0.111,  0.088,  0.070,  0.059,  0.047,  0.039,  0.033,
  0.029,  0.025,  0.022,  0.019,  0.017,  0.015,  0.014,  0.012,
  0.011,  0.010,  0.009,  0.009,  0.008,  0.007,  0.007,  0.006,
  0.006,  0.005,  0.005,  0.005,  0.005,  0.004,  0.004,  0.004,
  0.004,  0.003,  0.003,  0.003,  0.003,  0.003,  0.003,  0.003 
};

const G4double G4XDeltaDeltastarTable::sigmaDD1905[121] = 
{
  0.0,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.001,  0.001,  0.003,  0.005,  0.009,  0.000,  0.000,  0.001,
  0.005,  0.018,  0.038,  0.061,  0.086,  0.110,  0.134,  0.157,
  0.178,  0.197,  0.216,  0.232,  0.248,  0.262,  0.274,  0.285,
  0.295,  0.304,  0.312,  0.318,  0.324,  0.329,  0.333,  0.336,
  0.338,  0.340,  0.341,  0.342,  0.342,  0.341,  0.340,  0.339,
  0.338,  0.293,  0.240,  0.196,  0.166,  0.135,  0.114,  0.098,
  0.084,  0.073,  0.064,  0.057,  0.055,  0.045,  0.041,  0.037,
  0.034,  0.031,  0.028,  0.026,  0.024,  0.022,  0.021,  0.019,
  0.018,  0.017,  0.016,  0.015,  0.014,  0.013,  0.012,  0.012,
  0.011,  0.011,  0.010,  0.010,  0.009,  0.009,  0.008,  0.008 
};

const G4double G4XDeltaDeltastarTable::sigmaDD1910[121] = 
{
  0.0,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.001,
  0.001,  0.001,  0.002,  0.003,  0.005,  0.008,  0.000,  0.000,
  0.001,  0.004,  0.010,  0.018,  0.027,  0.035,  0.044,  0.052,
  0.059,  0.066,  0.073,  0.078,  0.083,  0.088,  0.092,  0.096,
  0.099,  0.102,  0.104,  0.106,  0.108,  0.110,  0.111,  0.112,
  0.112,  0.113,  0.113,  0.113,  0.112,  0.112,  0.112,  0.111,
  0.111,  0.094,  0.076,  0.062,  0.052,  0.042,  0.036,  0.030,
  0.026,  0.023,  0.020,  0.018,  0.016,  0.014,  0.013,  0.011,
  0.010,  0.009,  0.009,  0.008,  0.007,  0.007,  0.006,  0.006,
  0.006,  0.005,  0.005,  0.005,  0.004,  0.004,  0.004,  0.004,
  0.003,  0.003,  0.003,  0.003,  0.003,  0.003,  0.003,  0.002 
};

const G4double G4XDeltaDeltastarTable::sigmaDD1920[121] = 
{
  0.0,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.001,  0.001,  0.001,  0.002,  0.003,  0.006,  0.000,  0.000,
  0.001,  0.007,  0.020,  0.040,  0.060,  0.080,  0.099,  0.117,
  0.133,  0.147,  0.160,  0.171,  0.181,  0.190,  0.198,  0.204,
  0.210,  0.215,  0.219,  0.222,  0.225,  0.227,  0.228,  0.229,
  0.229,  0.229,  0.229,  0.228,  0.227,  0.226,  0.224,  0.222,
  0.222,  0.183,  0.146,  0.117,  0.098,  0.078,  0.066,  0.056,
  0.048,  0.041,  0.036,  0.032,  0.028,  0.025,  0.023,  0.021,
  0.019,  0.017,  0.016,  0.014,  0.013,  0.012,  0.011,  0.011,
  0.010,  0.009,  0.009,  0.008,  0.008,  0.007,  0.007,  0.006,
  0.006,  0.006,  0.005,  0.005,  0.005,  0.005,  0.005,  0.004 
};

const G4double G4XDeltaDeltastarTable::sigmaDD1930[121] = 
{
  0.0,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.001,  0.001,  0.002,  0.004,  0.007,  0.000,  0.000,
  0.001,  0.004,  0.015,  0.033,  0.053,  0.075,  0.096,  0.117,
  0.136,  0.154,  0.171,  0.187,  0.201,  0.214,  0.225,  0.236,
  0.245,  0.253,  0.261,  0.267,  0.272,  0.277,  0.281,  0.284,
  0.287,  0.288,  0.290,  0.290,  0.291,  0.291,  0.290,  0.289,
  0.289,  0.251,  0.206,  0.168,  0.142,  0.115,  0.097,  0.083,
  0.071,  0.062,  0.059,  0.048,  0.043,  0.038,  0.035,  0.031,
  0.028,  0.026,  0.024,  0.022,  0.020,  0.019,  0.017,  0.016,
  0.015,  0.014,  0.013,  0.012,  0.012,  0.011,  0.010,  0.010,
  0.009,  0.009,  0.008,  0.008,  0.008,  0.007,  0.007,  0.007 
};

const G4double G4XDeltaDeltastarTable::sigmaDD1950[121] = 
{
  0.0,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,  0.000,
  0.000,  0.001,  0.001,  0.002,  0.003,  0.006,  0.011,  0.000,
  0.000,  0.002,  0.011,  0.029,  0.053,  0.078,  0.103,  0.128,
  0.151,  0.173,  0.194,  0.213,  0.230,  0.246,  0.261,  0.274,
  0.285,  0.296,  0.305,  0.313,  0.320,  0.326,  0.331,  0.335,
  0.339,  0.342,  0.344,  0.345,  0.346,  0.346,  0.345,  0.344,
  0.344,  0.301,  0.247,  0.202,  0.170,  0.139,  0.117,  0.099,
  0.086,  0.075,  0.065,  0.058,  0.051,  0.046,  0.042,  0.038,
  0.034,  0.031,  0.029,  0.026,  0.024,  0.022,  0.021,  0.019,
  0.018,  0.017,  0.016,  0.015,  0.014,  0.013,  0.013,  0.012,
  0.011,  0.011,  0.010,  0.010,  0.009,  0.009,  0.008,  0.008 
};



G4XDeltaDeltastarTable::G4XDeltaDeltastarTable() 
{
  xMap["delta(1600)-"] = (G4double*) sigmaDD1600;
  xMap["delta(1600)0"] = (G4double*) sigmaDD1600;
  xMap["delta(1600)+"] = (G4double*) sigmaDD1600;
  xMap["delta(1600)++"] = (G4double*) sigmaDD1600;

  xMap["delta(1620)-"] = (G4double*) sigmaDD1620;
  xMap["delta(1620)0"] = (G4double*) sigmaDD1620;
  xMap["delta(1620)+"] = (G4double*) sigmaDD1620;
  xMap["delta(1620)++"] = (G4double*) sigmaDD1620;

  xMap["delta(1700)-"] = (G4double*) sigmaDD1700;
  xMap["delta(1700)0"] = (G4double*) sigmaDD1700;
  xMap["delta(1700)+"] = (G4double*) sigmaDD1700;
  xMap["delta(1700)++"] = (G4double*) sigmaDD1700;

  xMap["delta(1900)-"] = (G4double*) sigmaDD1900;
  xMap["delta(1900)0"] = (G4double*) sigmaDD1900;
  xMap["delta(1900)+"] = (G4double*) sigmaDD1900;
  xMap["delta(1900)++"] = (G4double*) sigmaDD1900;

  xMap["delta(1905)-"] = (G4double*) sigmaDD1905;
  xMap["delta(1905)0"] = (G4double*) sigmaDD1905;
  xMap["delta(1905)+"] = (G4double*) sigmaDD1905;
  xMap["delta(1905)++"] = (G4double*) sigmaDD1905;

  xMap["delta(1910)-"] = (G4double*) sigmaDD1910;
  xMap["delta(1910)0"] = (G4double*) sigmaDD1910;
  xMap["delta(1910)+"] = (G4double*) sigmaDD1910;
  xMap["delta(1910)++"] = (G4double*) sigmaDD1910;

  xMap["delta(1920)-"] = (G4double*) sigmaDD1920;
  xMap["delta(1920)0"] = (G4double*) sigmaDD1920;
  xMap["delta(1920)+"] = (G4double*) sigmaDD1920;
  xMap["delta(1920)++"] = (G4double*) sigmaDD1920;

  xMap["delta(1930)-"] = (G4double*) sigmaDD1930;
  xMap["delta(1930)0"] = (G4double*) sigmaDD1930;
  xMap["delta(1930)+"] = (G4double*) sigmaDD1930;
  xMap["delta(1930)++"] = (G4double*) sigmaDD1930;

  xMap["delta(1950)-"] = (G4double*) sigmaDD1950;
  xMap["delta(1950)0"] = (G4double*) sigmaDD1950;
  xMap["delta(1950)+"] = (G4double*) sigmaDD1950;
  xMap["delta(1950)++"] = (G4double*) sigmaDD1950;
}


G4XDeltaDeltastarTable::~G4XDeltaDeltastarTable()
{ }


const G4PhysicsVector* G4XDeltaDeltastarTable::CrossSectionTable(const G4String& particleName) const
{
  // NOTE: the returned pointer is owned by the client

  if (xMap.find(particleName) != xMap.end())
    {
      // Cross section table for the requested particle available in the Map
      G4PhysicsFreeVector* sigmaVector = new G4PhysicsFreeVector(sizeDeltaDeltastar);
      std::map <G4String, G4double*, std::less<G4String> >::const_iterator iter;
      G4double* sigmaPointer = 0;
      for (iter = xMap.begin(); iter != xMap.end(); ++iter)
	{
	  G4String str = (*iter).first;
          if (str == particleName)
	    {
	      sigmaPointer = (*iter).second; 
	    }
	}

      G4int i;
      for (i=0; i<sizeDeltaDeltastar; i++)
	{
	  G4double value = *(sigmaPointer + i) * 0.5* millibarn;
	  G4double energy = energyTable[i] * GeV;
	  sigmaVector->PutValue(i,energy,value);
	}	    
      return sigmaVector;
    }
  else
    // No cross section table for the requested particle is available in the Map
    return 0;
}



