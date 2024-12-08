#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nu()
{
//=========Macro generated from canvas: c1/
//=========  (Sat Oct 26 16:00:07 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   gStyle->SetOptFit(1);
   c1->SetHighLightColor(2);
   c1->Range(-1.578947,-66815.24,11.57895,489978.4);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.12);
   c1->SetTopMargin(0.12);
   c1->SetBottomMargin(0.12);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   THStack *hs = new THStack();
   hs->SetName("hs");
   hs->SetTitle("");
   hs->SetMaximum(423163.2);
   
   TH1F *hs_stack_40 = new TH1F("hs_stack_40","",200,0,10);
   hs_stack_40->SetMinimum(0);
   hs_stack_40->SetMaximum(423163.2);
   hs_stack_40->SetDirectory(nullptr);
   hs_stack_40->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_40->SetLineColor(ci);
   hs_stack_40->SetLineWidth(0);
   hs_stack_40->GetXaxis()->SetTitle("#nu [GeV]");
   hs_stack_40->GetXaxis()->SetLabelFont(42);
   hs_stack_40->GetXaxis()->SetTitleSize(0.05);
   hs_stack_40->GetXaxis()->SetTitleOffset(1);
   hs_stack_40->GetXaxis()->SetTitleFont(42);
   hs_stack_40->GetYaxis()->SetLabelFont(42);
   hs_stack_40->GetYaxis()->SetTitleFont(42);
   hs_stack_40->GetZaxis()->SetLabelFont(42);
   hs_stack_40->GetZaxis()->SetTitleOffset(1);
   hs_stack_40->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_40);
   
   
   TH1F *nu_stack_1 = new TH1F("nu_stack_1","",200,0,10);
   nu_stack_1->SetBinContent(0,286);
   nu_stack_1->SetBinContent(1,11);
   nu_stack_1->SetBinContent(2,15);
   nu_stack_1->SetBinContent(3,10);
   nu_stack_1->SetBinContent(4,33);
   nu_stack_1->SetBinContent(5,31);
   nu_stack_1->SetBinContent(6,35);
   nu_stack_1->SetBinContent(7,50);
   nu_stack_1->SetBinContent(8,77);
   nu_stack_1->SetBinContent(9,133);
   nu_stack_1->SetBinContent(10,215);
   nu_stack_1->SetBinContent(11,374);
   nu_stack_1->SetBinContent(12,439);
   nu_stack_1->SetBinContent(13,604);
   nu_stack_1->SetBinContent(14,766);
   nu_stack_1->SetBinContent(15,985);
   nu_stack_1->SetBinContent(16,1405);
   nu_stack_1->SetBinContent(17,1767);
   nu_stack_1->SetBinContent(18,2417);
   nu_stack_1->SetBinContent(19,2989);
   nu_stack_1->SetBinContent(20,3646);
   nu_stack_1->SetBinContent(21,4562);
   nu_stack_1->SetBinContent(22,5451);
   nu_stack_1->SetBinContent(23,6873);
   nu_stack_1->SetBinContent(24,8356);
   nu_stack_1->SetBinContent(25,10395);
   nu_stack_1->SetBinContent(26,12757);
   nu_stack_1->SetBinContent(27,15326);
   nu_stack_1->SetBinContent(28,18247);
   nu_stack_1->SetBinContent(29,21441);
   nu_stack_1->SetBinContent(30,24402);
   nu_stack_1->SetBinContent(31,28117);
   nu_stack_1->SetBinContent(32,31958);
   nu_stack_1->SetBinContent(33,35862);
   nu_stack_1->SetBinContent(34,39765);
   nu_stack_1->SetBinContent(35,43181);
   nu_stack_1->SetBinContent(36,47509);
   nu_stack_1->SetBinContent(37,50877);
   nu_stack_1->SetBinContent(38,54286);
   nu_stack_1->SetBinContent(39,58668);
   nu_stack_1->SetBinContent(40,63098);
   nu_stack_1->SetBinContent(41,67193);
   nu_stack_1->SetBinContent(42,70483);
   nu_stack_1->SetBinContent(43,74961);
   nu_stack_1->SetBinContent(44,79272);
   nu_stack_1->SetBinContent(45,82918);
   nu_stack_1->SetBinContent(46,86631);
   nu_stack_1->SetBinContent(47,90553);
   nu_stack_1->SetBinContent(48,94466);
   nu_stack_1->SetBinContent(49,98669);
   nu_stack_1->SetBinContent(50,102162);
   nu_stack_1->SetBinContent(51,105793);
   nu_stack_1->SetBinContent(52,109348);
   nu_stack_1->SetBinContent(53,113350);
   nu_stack_1->SetBinContent(54,117001);
   nu_stack_1->SetBinContent(55,120911);
   nu_stack_1->SetBinContent(56,125205);
   nu_stack_1->SetBinContent(57,127798);
   nu_stack_1->SetBinContent(58,131942);
   nu_stack_1->SetBinContent(59,136130);
   nu_stack_1->SetBinContent(60,138202);
   nu_stack_1->SetBinContent(61,142435);
   nu_stack_1->SetBinContent(62,145452);
   nu_stack_1->SetBinContent(63,149463);
   nu_stack_1->SetBinContent(64,152918);
   nu_stack_1->SetBinContent(65,155813);
   nu_stack_1->SetBinContent(66,160035);
   nu_stack_1->SetBinContent(67,163197);
   nu_stack_1->SetBinContent(68,165548);
   nu_stack_1->SetBinContent(69,168580);
   nu_stack_1->SetBinContent(70,171346);
   nu_stack_1->SetBinContent(71,174184);
   nu_stack_1->SetBinContent(72,177043);
   nu_stack_1->SetBinContent(73,180406);
   nu_stack_1->SetBinContent(74,182714);
   nu_stack_1->SetBinContent(75,185184);
   nu_stack_1->SetBinContent(76,188903);
   nu_stack_1->SetBinContent(77,190780);
   nu_stack_1->SetBinContent(78,193711);
   nu_stack_1->SetBinContent(79,196813);
   nu_stack_1->SetBinContent(80,197681);
   nu_stack_1->SetBinContent(81,200352);
   nu_stack_1->SetBinContent(82,203903);
   nu_stack_1->SetBinContent(83,205922);
   nu_stack_1->SetBinContent(84,207820);
   nu_stack_1->SetBinContent(85,211355);
   nu_stack_1->SetBinContent(86,212273);
   nu_stack_1->SetBinContent(87,214001);
   nu_stack_1->SetBinContent(88,216287);
   nu_stack_1->SetBinContent(89,218277);
   nu_stack_1->SetBinContent(90,220652);
   nu_stack_1->SetBinContent(91,222405);
   nu_stack_1->SetBinContent(92,223798);
   nu_stack_1->SetBinContent(93,225603);
   nu_stack_1->SetBinContent(94,227656);
   nu_stack_1->SetBinContent(95,228977);
   nu_stack_1->SetBinContent(96,230881);
   nu_stack_1->SetBinContent(97,232636);
   nu_stack_1->SetBinContent(98,235081);
   nu_stack_1->SetBinContent(99,235480);
   nu_stack_1->SetBinContent(100,237406);
   nu_stack_1->SetBinContent(101,239656);
   nu_stack_1->SetBinContent(102,240320);
   nu_stack_1->SetBinContent(103,240826);
   nu_stack_1->SetBinContent(104,244169);
   nu_stack_1->SetBinContent(105,243722);
   nu_stack_1->SetBinContent(106,246864);
   nu_stack_1->SetBinContent(107,246956);
   nu_stack_1->SetBinContent(108,247282);
   nu_stack_1->SetBinContent(109,249121);
   nu_stack_1->SetBinContent(110,251088);
   nu_stack_1->SetBinContent(111,251056);
   nu_stack_1->SetBinContent(112,251261);
   nu_stack_1->SetBinContent(113,250936);
   nu_stack_1->SetBinContent(114,251800);
   nu_stack_1->SetBinContent(115,253388);
   nu_stack_1->SetBinContent(116,253287);
   nu_stack_1->SetBinContent(117,253811);
   nu_stack_1->SetBinContent(118,254208);
   nu_stack_1->SetBinContent(119,255050);
   nu_stack_1->SetBinContent(120,256335);
   nu_stack_1->SetBinContent(121,257039);
   nu_stack_1->SetBinContent(122,256949);
   nu_stack_1->SetBinContent(123,257542);
   nu_stack_1->SetBinContent(124,258687);
   nu_stack_1->SetBinContent(125,258049);
   nu_stack_1->SetBinContent(126,258893);
   nu_stack_1->SetBinContent(127,259334);
   nu_stack_1->SetBinContent(128,260076);
   nu_stack_1->SetBinContent(129,259790);
   nu_stack_1->SetBinContent(130,261247);
   nu_stack_1->SetBinContent(131,261217);
   nu_stack_1->SetBinContent(132,260226);
   nu_stack_1->SetBinContent(133,262552);
   nu_stack_1->SetBinContent(134,262091);
   nu_stack_1->SetBinContent(135,261642);
   nu_stack_1->SetBinContent(136,262891);
   nu_stack_1->SetBinContent(137,264497);
   nu_stack_1->SetBinContent(138,263219);
   nu_stack_1->SetBinContent(139,263843);
   nu_stack_1->SetBinContent(140,262998);
   nu_stack_1->SetBinContent(141,262614);
   nu_stack_1->SetBinContent(142,263756);
   nu_stack_1->SetBinContent(143,262921);
   nu_stack_1->SetBinContent(144,262885);
   nu_stack_1->SetBinContent(145,264884);
   nu_stack_1->SetBinContent(146,263486);
   nu_stack_1->SetBinContent(147,265468);
   nu_stack_1->SetBinContent(148,266648);
   nu_stack_1->SetBinContent(149,269120);
   nu_stack_1->SetBinContent(150,269645);
   nu_stack_1->SetBinContent(151,270270);
   nu_stack_1->SetBinContent(152,270920);
   nu_stack_1->SetBinContent(153,270617);
   nu_stack_1->SetBinContent(154,271206);
   nu_stack_1->SetBinContent(155,274315);
   nu_stack_1->SetBinContent(156,274347);
   nu_stack_1->SetBinContent(157,276748);
   nu_stack_1->SetBinContent(158,276830);
   nu_stack_1->SetBinContent(159,276720);
   nu_stack_1->SetBinContent(160,280323);
   nu_stack_1->SetBinContent(161,281714);
   nu_stack_1->SetBinContent(162,282431);
   nu_stack_1->SetBinContent(163,285199);
   nu_stack_1->SetBinContent(164,285762);
   nu_stack_1->SetBinContent(165,289082);
   nu_stack_1->SetBinContent(166,289889);
   nu_stack_1->SetBinContent(167,292732);
   nu_stack_1->SetBinContent(168,295936);
   nu_stack_1->SetBinContent(169,297377);
   nu_stack_1->SetBinContent(170,301079);
   nu_stack_1->SetBinContent(171,305090);
   nu_stack_1->SetBinContent(172,309221);
   nu_stack_1->SetBinContent(173,314432);
   nu_stack_1->SetBinContent(174,320022);
   nu_stack_1->SetBinContent(175,324226);
   nu_stack_1->SetBinContent(176,332131);
   nu_stack_1->SetBinContent(177,338219);
   nu_stack_1->SetBinContent(178,342352);
   nu_stack_1->SetBinContent(179,349270);
   nu_stack_1->SetBinContent(180,351636);
   nu_stack_1->SetBinContent(181,352636);
   nu_stack_1->SetBinContent(182,352412);
   nu_stack_1->SetBinContent(183,338708);
   nu_stack_1->SetBinContent(184,318439);
   nu_stack_1->SetBinContent(185,285689);
   nu_stack_1->SetBinContent(186,249794);
   nu_stack_1->SetBinContent(187,216034);
   nu_stack_1->SetBinContent(188,188938);
   nu_stack_1->SetBinContent(189,168766);
   nu_stack_1->SetBinContent(190,150344);
   nu_stack_1->SetBinContent(191,139142);
   nu_stack_1->SetBinContent(192,120919);
   nu_stack_1->SetBinContent(193,81246);
   nu_stack_1->SetBinContent(194,38162);
   nu_stack_1->SetBinContent(195,917);
   nu_stack_1->SetBinContent(196,1);
   nu_stack_1->SetEntries(3.530097e+07);
   nu_stack_1->SetDirectory(nullptr);
   
   TPaveStats *ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#121415");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("Entries =   3.530097e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  6.251");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  2.082");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   nu_stack_1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(nu_stack_1);

   ci = TColor::GetColor("#121415");
   nu_stack_1->SetLineColor(ci);
   nu_stack_1->GetXaxis()->SetLabelFont(42);
   nu_stack_1->GetXaxis()->SetTitleOffset(1);
   nu_stack_1->GetXaxis()->SetTitleFont(42);
   nu_stack_1->GetYaxis()->SetLabelFont(42);
   nu_stack_1->GetYaxis()->SetTitleFont(42);
   nu_stack_1->GetZaxis()->SetLabelFont(42);
   nu_stack_1->GetZaxis()->SetTitleOffset(1);
   nu_stack_1->GetZaxis()->SetTitleFont(42);
   hs->Add(nu_stack_1,"sames histo");
   
   TH1F *nu_cut_stack_2 = new TH1F("nu_cut_stack_2","",200,0,10);
   nu_cut_stack_2->SetBinContent(42,1767);
   nu_cut_stack_2->SetBinContent(43,19871);
   nu_cut_stack_2->SetBinContent(44,36673);
   nu_cut_stack_2->SetBinContent(45,67580);
   nu_cut_stack_2->SetBinContent(46,86118);
   nu_cut_stack_2->SetBinContent(47,113026);
   nu_cut_stack_2->SetBinContent(48,134385);
   nu_cut_stack_2->SetBinContent(49,154194);
   nu_cut_stack_2->SetBinContent(50,163990);
   nu_cut_stack_2->SetBinContent(51,178343);
   nu_cut_stack_2->SetBinContent(52,187209);
   nu_cut_stack_2->SetBinContent(53,197253);
   nu_cut_stack_2->SetBinContent(54,197346);
   nu_cut_stack_2->SetBinContent(55,206367);
   nu_cut_stack_2->SetBinContent(56,212877);
   nu_cut_stack_2->SetBinContent(57,215946);
   nu_cut_stack_2->SetBinContent(58,214644);
   nu_cut_stack_2->SetBinContent(59,223851);
   nu_cut_stack_2->SetBinContent(60,222084);
   nu_cut_stack_2->SetBinContent(61,222115);
   nu_cut_stack_2->SetBinContent(62,226424);
   nu_cut_stack_2->SetBinContent(63,228098);
   nu_cut_stack_2->SetBinContent(64,220131);
   nu_cut_stack_2->SetBinContent(65,214861);
   nu_cut_stack_2->SetBinContent(66,214086);
   nu_cut_stack_2->SetBinContent(67,205995);
   nu_cut_stack_2->SetBinContent(68,200446);
   nu_cut_stack_2->SetBinContent(69,192944);
   nu_cut_stack_2->SetBinContent(70,189503);
   nu_cut_stack_2->SetBinContent(71,181319);
   nu_cut_stack_2->SetBinContent(72,174654);
   nu_cut_stack_2->SetBinContent(73,165230);
   nu_cut_stack_2->SetBinContent(74,161107);
   nu_cut_stack_2->SetBinContent(75,155806);
   nu_cut_stack_2->SetBinContent(76,147312);
   nu_cut_stack_2->SetBinContent(77,137454);
   nu_cut_stack_2->SetBinContent(78,132897);
   nu_cut_stack_2->SetBinContent(79,125364);
   nu_cut_stack_2->SetBinContent(80,121644);
   nu_cut_stack_2->SetBinContent(81,114390);
   nu_cut_stack_2->SetBinContent(82,108996);
   nu_cut_stack_2->SetBinContent(83,101525);
   nu_cut_stack_2->SetBinContent(84,96534);
   nu_cut_stack_2->SetBinContent(85,95015);
   nu_cut_stack_2->SetBinContent(86,90892);
   nu_cut_stack_2->SetBinContent(87,87389);
   nu_cut_stack_2->SetBinContent(88,82398);
   nu_cut_stack_2->SetBinContent(89,78957);
   nu_cut_stack_2->SetBinContent(90,76291);
   nu_cut_stack_2->SetBinContent(91,68386);
   nu_cut_stack_2->SetBinContent(92,69006);
   nu_cut_stack_2->SetBinContent(93,63674);
   nu_cut_stack_2->SetBinContent(94,60481);
   nu_cut_stack_2->SetBinContent(95,58776);
   nu_cut_stack_2->SetBinContent(96,54498);
   nu_cut_stack_2->SetBinContent(97,52235);
   nu_cut_stack_2->SetBinContent(98,49972);
   nu_cut_stack_2->SetBinContent(99,50003);
   nu_cut_stack_2->SetBinContent(100,45849);
   nu_cut_stack_2->SetBinContent(101,41540);
   nu_cut_stack_2->SetBinContent(102,41292);
   nu_cut_stack_2->SetBinContent(103,37975);
   nu_cut_stack_2->SetBinContent(104,35309);
   nu_cut_stack_2->SetBinContent(105,35557);
   nu_cut_stack_2->SetBinContent(106,33108);
   nu_cut_stack_2->SetBinContent(107,33046);
   nu_cut_stack_2->SetBinContent(108,30752);
   nu_cut_stack_2->SetBinContent(109,28427);
   nu_cut_stack_2->SetBinContent(110,28923);
   nu_cut_stack_2->SetBinContent(111,27497);
   nu_cut_stack_2->SetBinContent(112,25017);
   nu_cut_stack_2->SetBinContent(113,23994);
   nu_cut_stack_2->SetBinContent(114,22506);
   nu_cut_stack_2->SetBinContent(115,23157);
   nu_cut_stack_2->SetBinContent(116,19747);
   nu_cut_stack_2->SetBinContent(117,19189);
   nu_cut_stack_2->SetBinContent(118,17887);
   nu_cut_stack_2->SetBinContent(119,18073);
   nu_cut_stack_2->SetBinContent(120,17205);
   nu_cut_stack_2->SetBinContent(121,14601);
   nu_cut_stack_2->SetBinContent(122,14942);
   nu_cut_stack_2->SetBinContent(123,13671);
   nu_cut_stack_2->SetBinContent(124,13485);
   nu_cut_stack_2->SetBinContent(125,12121);
   nu_cut_stack_2->SetBinContent(126,11408);
   nu_cut_stack_2->SetBinContent(127,11036);
   nu_cut_stack_2->SetBinContent(128,11532);
   nu_cut_stack_2->SetBinContent(129,10695);
   nu_cut_stack_2->SetBinContent(130,10788);
   nu_cut_stack_2->SetBinContent(131,9238);
   nu_cut_stack_2->SetBinContent(132,9052);
   nu_cut_stack_2->SetBinContent(133,7781);
   nu_cut_stack_2->SetBinContent(134,8153);
   nu_cut_stack_2->SetBinContent(135,6820);
   nu_cut_stack_2->SetBinContent(136,6479);
   nu_cut_stack_2->SetBinContent(137,6882);
   nu_cut_stack_2->SetBinContent(138,6603);
   nu_cut_stack_2->SetBinContent(139,6572);
   nu_cut_stack_2->SetBinContent(140,5704);
   nu_cut_stack_2->SetBinContent(141,4929);
   nu_cut_stack_2->SetBinContent(142,4991);
   nu_cut_stack_2->SetBinContent(143,4495);
   nu_cut_stack_2->SetBinContent(144,4681);
   nu_cut_stack_2->SetBinContent(145,4619);
   nu_cut_stack_2->SetBinContent(146,3534);
   nu_cut_stack_2->SetBinContent(147,4309);
   nu_cut_stack_2->SetBinContent(148,3472);
   nu_cut_stack_2->SetBinContent(149,2387);
   nu_cut_stack_2->SetBinContent(150,3038);
   nu_cut_stack_2->SetBinContent(151,2170);
   nu_cut_stack_2->SetBinContent(152,2542);
   nu_cut_stack_2->SetBinContent(153,2201);
   nu_cut_stack_2->SetBinContent(154,2325);
   nu_cut_stack_2->SetBinContent(155,2263);
   nu_cut_stack_2->SetBinContent(156,1519);
   nu_cut_stack_2->SetBinContent(157,1643);
   nu_cut_stack_2->SetBinContent(158,1891);
   nu_cut_stack_2->SetBinContent(159,1395);
   nu_cut_stack_2->SetBinContent(160,1178);
   nu_cut_stack_2->SetBinContent(161,1333);
   nu_cut_stack_2->SetBinContent(162,1643);
   nu_cut_stack_2->SetBinContent(163,1209);
   nu_cut_stack_2->SetBinContent(164,1271);
   nu_cut_stack_2->SetBinContent(165,496);
   nu_cut_stack_2->SetBinContent(166,775);
   nu_cut_stack_2->SetBinContent(167,1054);
   nu_cut_stack_2->SetBinContent(168,868);
   nu_cut_stack_2->SetBinContent(169,620);
   nu_cut_stack_2->SetBinContent(170,496);
   nu_cut_stack_2->SetBinContent(171,403);
   nu_cut_stack_2->SetBinContent(172,651);
   nu_cut_stack_2->SetBinContent(173,496);
   nu_cut_stack_2->SetBinContent(174,527);
   nu_cut_stack_2->SetBinContent(175,248);
   nu_cut_stack_2->SetBinContent(176,310);
   nu_cut_stack_2->SetBinContent(177,279);
   nu_cut_stack_2->SetBinContent(178,279);
   nu_cut_stack_2->SetBinContent(179,155);
   nu_cut_stack_2->SetBinContent(180,186);
   nu_cut_stack_2->SetBinContent(181,62);
   nu_cut_stack_2->SetBinContent(187,31);
   nu_cut_stack_2->SetBinError(42,234.0449);
   nu_cut_stack_2->SetBinError(43,784.8573);
   nu_cut_stack_2->SetBinError(44,1066.238);
   nu_cut_stack_2->SetBinError(45,1447.405);
   nu_cut_stack_2->SetBinError(46,1633.909);
   nu_cut_stack_2->SetBinError(47,1871.846);
   nu_cut_stack_2->SetBinError(48,2041.062);
   nu_cut_stack_2->SetBinError(49,2186.324);
   nu_cut_stack_2->SetBinError(50,2254.704);
   nu_cut_stack_2->SetBinError(51,2351.305);
   nu_cut_stack_2->SetBinError(52,2409.041);
   nu_cut_stack_2->SetBinError(53,2472.821);
   nu_cut_stack_2->SetBinError(54,2473.404);
   nu_cut_stack_2->SetBinError(55,2529.304);
   nu_cut_stack_2->SetBinError(56,2568.888);
   nu_cut_stack_2->SetBinError(57,2587.34);
   nu_cut_stack_2->SetBinError(58,2579.528);
   nu_cut_stack_2->SetBinError(59,2634.27);
   nu_cut_stack_2->SetBinError(60,2623.853);
   nu_cut_stack_2->SetBinError(61,2624.036);
   nu_cut_stack_2->SetBinError(62,2649.367);
   nu_cut_stack_2->SetBinError(63,2659.142);
   nu_cut_stack_2->SetBinError(64,2612.29);
   nu_cut_stack_2->SetBinError(65,2580.831);
   nu_cut_stack_2->SetBinError(66,2576.173);
   nu_cut_stack_2->SetBinError(67,2527.023);
   nu_cut_stack_2->SetBinError(68,2492.755);
   nu_cut_stack_2->SetBinError(69,2445.662);
   nu_cut_stack_2->SetBinError(70,2423.756);
   nu_cut_stack_2->SetBinError(71,2370.841);
   nu_cut_stack_2->SetBinError(72,2326.859);
   nu_cut_stack_2->SetBinError(73,2263.212);
   nu_cut_stack_2->SetBinError(74,2234.797);
   nu_cut_stack_2->SetBinError(75,2197.723);
   nu_cut_stack_2->SetBinError(76,2136.977);
   nu_cut_stack_2->SetBinError(77,2064.237);
   nu_cut_stack_2->SetBinError(78,2029.731);
   nu_cut_stack_2->SetBinError(79,1971.366);
   nu_cut_stack_2->SetBinError(80,1941.897);
   nu_cut_stack_2->SetBinError(81,1883.106);
   nu_cut_stack_2->SetBinError(82,1838.172);
   nu_cut_stack_2->SetBinError(83,1774.056);
   nu_cut_stack_2->SetBinError(84,1729.9);
   nu_cut_stack_2->SetBinError(85,1716.236);
   nu_cut_stack_2->SetBinError(86,1678.586);
   nu_cut_stack_2->SetBinError(87,1645.922);
   nu_cut_stack_2->SetBinError(88,1598.23);
   nu_cut_stack_2->SetBinError(89,1564.502);
   nu_cut_stack_2->SetBinError(90,1537.862);
   nu_cut_stack_2->SetBinError(91,1456.01);
   nu_cut_stack_2->SetBinError(92,1462.596);
   nu_cut_stack_2->SetBinError(93,1404.953);
   nu_cut_stack_2->SetBinError(94,1369.274);
   nu_cut_stack_2->SetBinError(95,1349.836);
   nu_cut_stack_2->SetBinError(96,1299.784);
   nu_cut_stack_2->SetBinError(97,1272.511);
   nu_cut_stack_2->SetBinError(98,1244.641);
   nu_cut_stack_2->SetBinError(99,1245.027);
   nu_cut_stack_2->SetBinError(100,1192.191);
   nu_cut_stack_2->SetBinError(101,1134.786);
   nu_cut_stack_2->SetBinError(102,1131.394);
   nu_cut_stack_2->SetBinError(103,1085);
   nu_cut_stack_2->SetBinError(104,1046.221);
   nu_cut_stack_2->SetBinError(105,1049.889);
   nu_cut_stack_2->SetBinError(106,1013.088);
   nu_cut_stack_2->SetBinError(107,1012.139);
   nu_cut_stack_2->SetBinError(108,976.377);
   nu_cut_stack_2->SetBinError(109,938.7422);
   nu_cut_stack_2->SetBinError(110,946.8965);
   nu_cut_stack_2->SetBinError(111,923.2589);
   nu_cut_stack_2->SetBinError(112,880.6401);
   nu_cut_stack_2->SetBinError(113,862.4465);
   nu_cut_stack_2->SetBinError(114,835.276);
   nu_cut_stack_2->SetBinError(115,847.2703);
   nu_cut_stack_2->SetBinError(116,782.4046);
   nu_cut_stack_2->SetBinError(117,771.271);
   nu_cut_stack_2->SetBinError(118,744.6456);
   nu_cut_stack_2->SetBinError(119,748.5072);
   nu_cut_stack_2->SetBinError(120,730.3116);
   nu_cut_stack_2->SetBinError(121,672.7786);
   nu_cut_stack_2->SetBinError(122,680.5895);
   nu_cut_stack_2->SetBinError(123,651);
   nu_cut_stack_2->SetBinError(124,646.5563);
   nu_cut_stack_2->SetBinError(125,612.9853);
   nu_cut_stack_2->SetBinError(126,594.6831);
   nu_cut_stack_2->SetBinError(127,584.9068);
   nu_cut_stack_2->SetBinError(128,597.9063);
   nu_cut_stack_2->SetBinError(129,575.7994);
   nu_cut_stack_2->SetBinError(130,578.2975);
   nu_cut_stack_2->SetBinError(131,535.143);
   nu_cut_stack_2->SetBinError(132,529.7282);
   nu_cut_stack_2->SetBinError(133,491.1324);
   nu_cut_stack_2->SetBinError(134,502.7355);
   nu_cut_stack_2->SetBinError(135,459.8043);
   nu_cut_stack_2->SetBinError(136,448.1618);
   nu_cut_stack_2->SetBinError(137,461.8896);
   nu_cut_stack_2->SetBinError(138,452.4301);
   nu_cut_stack_2->SetBinError(139,451.3668);
   nu_cut_stack_2->SetBinError(140,420.5045);
   nu_cut_stack_2->SetBinError(141,390.8951);
   nu_cut_stack_2->SetBinError(142,393.3459);
   nu_cut_stack_2->SetBinError(143,373.2894);
   nu_cut_stack_2->SetBinError(144,380.9344);
   nu_cut_stack_2->SetBinError(145,378.4032);
   nu_cut_stack_2->SetBinError(146,330.9894);
   nu_cut_stack_2->SetBinError(147,365.4846);
   nu_cut_stack_2->SetBinError(148,328.0732);
   nu_cut_stack_2->SetBinError(149,272.0239);
   nu_cut_stack_2->SetBinError(150,306.8843);
   nu_cut_stack_2->SetBinError(151,259.3646);
   nu_cut_stack_2->SetBinError(152,280.7169);
   nu_cut_stack_2->SetBinError(153,261.2106);
   nu_cut_stack_2->SetBinError(154,268.4679);
   nu_cut_stack_2->SetBinError(155,264.8641);
   nu_cut_stack_2->SetBinError(156,217);
   nu_cut_stack_2->SetBinError(157,225.6834);
   nu_cut_stack_2->SetBinError(158,242.1177);
   nu_cut_stack_2->SetBinError(159,207.9543);
   nu_cut_stack_2->SetBinError(160,191.0968);
   nu_cut_stack_2->SetBinError(161,203.2806);
   nu_cut_stack_2->SetBinError(162,225.6834);
   nu_cut_stack_2->SetBinError(163,193.5949);
   nu_cut_stack_2->SetBinError(164,198.4969);
   nu_cut_stack_2->SetBinError(165,124);
   nu_cut_stack_2->SetBinError(166,155);
   nu_cut_stack_2->SetBinError(167,180.7595);
   nu_cut_stack_2->SetBinError(168,164.0366);
   nu_cut_stack_2->SetBinError(169,138.6362);
   nu_cut_stack_2->SetBinError(170,124);
   nu_cut_stack_2->SetBinError(171,111.7721);
   nu_cut_stack_2->SetBinError(172,142.0598);
   nu_cut_stack_2->SetBinError(173,124);
   nu_cut_stack_2->SetBinError(174,127.8163);
   nu_cut_stack_2->SetBinError(175,87.68124);
   nu_cut_stack_2->SetBinError(176,98.03061);
   nu_cut_stack_2->SetBinError(177,93);
   nu_cut_stack_2->SetBinError(178,93);
   nu_cut_stack_2->SetBinError(179,69.31811);
   nu_cut_stack_2->SetBinError(180,75.93418);
   nu_cut_stack_2->SetBinError(181,43.84062);
   nu_cut_stack_2->SetBinError(187,31);
   nu_cut_stack_2->SetEntries(283449);
   
   ptstats = new TPaveStats(0.52,0.835,0.75,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#0c5da5");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries = 283449 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  3.583");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.004");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   nu_cut_stack_2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(nu_cut_stack_2);

   ci = 1185;
   color = new TColor(ci, 0.04705882, 0.3647059, 0.6470588, " ", 0.15);
   nu_cut_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#0c5da5");
   nu_cut_stack_2->SetLineColor(ci);
   nu_cut_stack_2->GetXaxis()->SetLabelFont(42);
   nu_cut_stack_2->GetXaxis()->SetTitleOffset(1);
   nu_cut_stack_2->GetXaxis()->SetTitleFont(42);
   nu_cut_stack_2->GetYaxis()->SetLabelFont(42);
   nu_cut_stack_2->GetYaxis()->SetTitleFont(42);
   nu_cut_stack_2->GetZaxis()->SetLabelFont(42);
   nu_cut_stack_2->GetZaxis()->SetTitleOffset(1);
   nu_cut_stack_2->GetZaxis()->SetTitleFont(42);
   hs->Add(nu_cut_stack_2,"sames histo");
   hs->Draw("hist nostack");
   TText *text = new TText(0.15,0.04,"Light blue is scaled by 31");
   text->SetNDC();

   ci = TColor::GetColor("#0c5da5");
   text->SetTextColor(ci);
   text->SetTextSize(0.04);
   text->Draw();
   
   ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#121415");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   3.530097e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  6.251");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  2.082");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   ptstats = new TPaveStats(0.52,0.835,0.75,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#0c5da5");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries = 283449 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  3.583");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.004");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
