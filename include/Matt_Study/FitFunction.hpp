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
    // return (0.5 * par[2] * par[1] / TMath::Pi() / ((x[0] - par[0]) * (x[0] - par[0]) + 0.25 * par[1] * par[1]));
    double gammahalf = par[1]/2.0;
    return par[2] * 1.0/(M_PI) * gammahalf/((x[0]-par[0])*(x[0]-par[0]) + gammahalf*gammahalf);
}


Double_t BW2(Double_t *x, Double_t *par)
{
    // return (0.5 * par[2] * par[1] / TMath::Pi() / ((x[0] - par[0]) * (x[0] - par[0]) + 0.25 * par[1] * par[1]));
    double gammahalf = 0.150/2.0;
    return par[1] * gammahalf/((x[0]-par[0])*(x[0]-par[0]) + gammahalf*gammahalf);
}

Double_t BW3(Double_t *x, Double_t *par) {
    return par[1] * TMath::BreitWigner(x[0], par[0], 0.150);
}

Double_t BW4(Double_t *x, Double_t *par) {
    double Gamma = 0.150;
    return par[1] * Gamma/(4.0*(par[0]-x[0])*(par[0]-x[0]) + Gamma*Gamma);
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

// Polynomial background function
Double_t pol32(Double_t* x, Double_t* par) {
    return par[2] + par[3] * x[0] + par[4] * x[0] * x[0] + par[5] * x[0] * x[0] * x[0];
}

//Breit-Wigner + 3rd background function
Double_t mybw(Double_t* x, Double_t* par) {
  return BW(x, par) + pol3(x, par);
}

//Breit-Wigner + 3rd background function
Double_t mybw2(Double_t* x, Double_t* par) {
  return BW3(x, par) + pol32(x, par);
}