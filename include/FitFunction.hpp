#pragma once 

Double_t fitfbw(Double_t *x, Double_t *par) {
    Double_t arg2 = 0.150;
    Double_t arg3 = (par[2] - x[0])*(par[2] - x[0]);
    Double_t arg4 = (0.150*0.150);
    return par[0]*(arg2/(4*arg3 + arg4)) + par[3] + par[4]*pow(x[0],1) + par[5]*pow(x[0],2) + par[6]*pow(x[0],3); 
    //+ par[7]*pow(x[0],4) + par[8]*pow(x[0],5);
}

Double_t Breit_Wigner(Double_t* x, Double_t* par) {

   Double_t bw = par[1]/((x[0]-par[0])*(x[0]-par[0]) + par[1]*par[1]/4);
   return par[2]*bw/(2*TMath::Pi());
}

Double_t BW(Double_t *x, Double_t *par)
{
    return (0.5 * par[2] * par[1] / TMath::Pi() / ((x[0] - par[0]) * (x[0] - par[0]) + 0.25 * par[1] * par[1]));
}

// Breit-Wigner M=par[0], Gamma=par[1] 
Double_t Breit_Wigner_Relativistic(Double_t* x, Double_t* par) {
    Double_t A = 2* sqrt(2)*par[0]*par[1]*sqrt(par[0]*par[0]*(par[0]*par[0]+par[1]*par[1]));
    Double_t B = 3.14159* sqrt(par[0]*par[0] + sqrt(par[0]*par[0]*(par[0]*par[0]+par[1]*par[1])));
    Double_t C = (x[0]*x[0]-par[0]*par[0])*(x[0]*x[0]-par[0]*par[0]) + par[0]*par[0]*par[1]*par[1];
    return par[2]*(A/B)/C;
}

// Polynomial background function
Double_t pol3(Double_t* x, Double_t* par) {
    return par[3] + par[4] * x[0] + par[5] * x[0] * x[0] + par[6] * x[0] * x[0] * x[0];
}
//Breit-Wigner + quadratic background function
Double_t mybw(Double_t* x, Double_t* par) {
  return BW(x, par)+pol3(x, par);
}