#ifdef __CLING__
#pragma cling optimize(0)
#endif
void phi_pion_minus()
{
//=========Macro generated from canvas: c1/
//=========  (Mon Sep  9 15:25:38 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   gStyle->SetOptFit(1);
   c1->SetHighLightColor(2);
   c1->Range(-250,-52298.34,250,383521.1);
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
   hs->SetMaximum(331222.8);
   
   TH1F *hs_stack_33 = new TH1F("hs_stack_33","",200,-190,190);
   hs_stack_33->SetMinimum(0);
   hs_stack_33->SetMaximum(331222.8);
   hs_stack_33->SetDirectory(nullptr);
   hs_stack_33->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_33->SetLineColor(ci);
   hs_stack_33->SetLineWidth(0);
   hs_stack_33->GetXaxis()->SetTitle("#phi_{#pi^{-}} [Deg.]");
   hs_stack_33->GetXaxis()->SetLabelFont(42);
   hs_stack_33->GetXaxis()->SetTitleSize(0.05);
   hs_stack_33->GetXaxis()->SetTitleOffset(1);
   hs_stack_33->GetXaxis()->SetTitleFont(42);
   hs_stack_33->GetYaxis()->SetLabelFont(42);
   hs_stack_33->GetYaxis()->SetTitleFont(42);
   hs_stack_33->GetZaxis()->SetLabelFont(42);
   hs_stack_33->GetZaxis()->SetTitleOffset(1);
   hs_stack_33->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_33);
   
   
   TH1F *phi_pion_minus_stack_1 = new TH1F("phi_pion_minus_stack_1","",200,-190,190);
   phi_pion_minus_stack_1->SetBinContent(6,153337);
   phi_pion_minus_stack_1->SetBinContent(7,208192);
   phi_pion_minus_stack_1->SetBinContent(8,209254);
   phi_pion_minus_stack_1->SetBinContent(9,209448);
   phi_pion_minus_stack_1->SetBinContent(10,210213);
   phi_pion_minus_stack_1->SetBinContent(11,210453);
   phi_pion_minus_stack_1->SetBinContent(12,210882);
   phi_pion_minus_stack_1->SetBinContent(13,214373);
   phi_pion_minus_stack_1->SetBinContent(14,219622);
   phi_pion_minus_stack_1->SetBinContent(15,226452);
   phi_pion_minus_stack_1->SetBinContent(16,234098);
   phi_pion_minus_stack_1->SetBinContent(17,241460);
   phi_pion_minus_stack_1->SetBinContent(18,247418);
   phi_pion_minus_stack_1->SetBinContent(19,253818);
   phi_pion_minus_stack_1->SetBinContent(20,255712);
   phi_pion_minus_stack_1->SetBinContent(21,258106);
   phi_pion_minus_stack_1->SetBinContent(22,255064);
   phi_pion_minus_stack_1->SetBinContent(23,248475);
   phi_pion_minus_stack_1->SetBinContent(24,241525);
   phi_pion_minus_stack_1->SetBinContent(25,233522);
   phi_pion_minus_stack_1->SetBinContent(26,223922);
   phi_pion_minus_stack_1->SetBinContent(27,212537);
   phi_pion_minus_stack_1->SetBinContent(28,200333);
   phi_pion_minus_stack_1->SetBinContent(29,195494);
   phi_pion_minus_stack_1->SetBinContent(30,195329);
   phi_pion_minus_stack_1->SetBinContent(31,196898);
   phi_pion_minus_stack_1->SetBinContent(32,199766);
   phi_pion_minus_stack_1->SetBinContent(33,207195);
   phi_pion_minus_stack_1->SetBinContent(34,213436);
   phi_pion_minus_stack_1->SetBinContent(35,218403);
   phi_pion_minus_stack_1->SetBinContent(36,222984);
   phi_pion_minus_stack_1->SetBinContent(37,227546);
   phi_pion_minus_stack_1->SetBinContent(38,232336);
   phi_pion_minus_stack_1->SetBinContent(39,236757);
   phi_pion_minus_stack_1->SetBinContent(40,243246);
   phi_pion_minus_stack_1->SetBinContent(41,250072);
   phi_pion_minus_stack_1->SetBinContent(42,253281);
   phi_pion_minus_stack_1->SetBinContent(43,256647);
   phi_pion_minus_stack_1->SetBinContent(44,261636);
   phi_pion_minus_stack_1->SetBinContent(45,265854);
   phi_pion_minus_stack_1->SetBinContent(46,268646);
   phi_pion_minus_stack_1->SetBinContent(47,268634);
   phi_pion_minus_stack_1->SetBinContent(48,267593);
   phi_pion_minus_stack_1->SetBinContent(49,264291);
   phi_pion_minus_stack_1->SetBinContent(50,262824);
   phi_pion_minus_stack_1->SetBinContent(51,260580);
   phi_pion_minus_stack_1->SetBinContent(52,259663);
   phi_pion_minus_stack_1->SetBinContent(53,259351);
   phi_pion_minus_stack_1->SetBinContent(54,262930);
   phi_pion_minus_stack_1->SetBinContent(55,263698);
   phi_pion_minus_stack_1->SetBinContent(56,264879);
   phi_pion_minus_stack_1->SetBinContent(57,265487);
   phi_pion_minus_stack_1->SetBinContent(58,263408);
   phi_pion_minus_stack_1->SetBinContent(59,261255);
   phi_pion_minus_stack_1->SetBinContent(60,256193);
   phi_pion_minus_stack_1->SetBinContent(61,249899);
   phi_pion_minus_stack_1->SetBinContent(62,244343);
   phi_pion_minus_stack_1->SetBinContent(63,239151);
   phi_pion_minus_stack_1->SetBinContent(64,233394);
   phi_pion_minus_stack_1->SetBinContent(65,230362);
   phi_pion_minus_stack_1->SetBinContent(66,225758);
   phi_pion_minus_stack_1->SetBinContent(67,222405);
   phi_pion_minus_stack_1->SetBinContent(68,224733);
   phi_pion_minus_stack_1->SetBinContent(69,228877);
   phi_pion_minus_stack_1->SetBinContent(70,236712);
   phi_pion_minus_stack_1->SetBinContent(71,247235);
   phi_pion_minus_stack_1->SetBinContent(72,257681);
   phi_pion_minus_stack_1->SetBinContent(73,264048);
   phi_pion_minus_stack_1->SetBinContent(74,268519);
   phi_pion_minus_stack_1->SetBinContent(75,271331);
   phi_pion_minus_stack_1->SetBinContent(76,273810);
   phi_pion_minus_stack_1->SetBinContent(77,272919);
   phi_pion_minus_stack_1->SetBinContent(78,273595);
   phi_pion_minus_stack_1->SetBinContent(79,274446);
   phi_pion_minus_stack_1->SetBinContent(80,273274);
   phi_pion_minus_stack_1->SetBinContent(81,274677);
   phi_pion_minus_stack_1->SetBinContent(82,270652);
   phi_pion_minus_stack_1->SetBinContent(83,267309);
   phi_pion_minus_stack_1->SetBinContent(84,260727);
   phi_pion_minus_stack_1->SetBinContent(85,254565);
   phi_pion_minus_stack_1->SetBinContent(86,248655);
   phi_pion_minus_stack_1->SetBinContent(87,243162);
   phi_pion_minus_stack_1->SetBinContent(88,237867);
   phi_pion_minus_stack_1->SetBinContent(89,230290);
   phi_pion_minus_stack_1->SetBinContent(90,220851);
   phi_pion_minus_stack_1->SetBinContent(91,213238);
   phi_pion_minus_stack_1->SetBinContent(92,207800);
   phi_pion_minus_stack_1->SetBinContent(93,203062);
   phi_pion_minus_stack_1->SetBinContent(94,198935);
   phi_pion_minus_stack_1->SetBinContent(95,195915);
   phi_pion_minus_stack_1->SetBinContent(96,190570);
   phi_pion_minus_stack_1->SetBinContent(97,192237);
   phi_pion_minus_stack_1->SetBinContent(98,195895);
   phi_pion_minus_stack_1->SetBinContent(99,201034);
   phi_pion_minus_stack_1->SetBinContent(100,207075);
   phi_pion_minus_stack_1->SetBinContent(101,213087);
   phi_pion_minus_stack_1->SetBinContent(102,219959);
   phi_pion_minus_stack_1->SetBinContent(103,222756);
   phi_pion_minus_stack_1->SetBinContent(104,223521);
   phi_pion_minus_stack_1->SetBinContent(105,225266);
   phi_pion_minus_stack_1->SetBinContent(106,224136);
   phi_pion_minus_stack_1->SetBinContent(107,227809);
   phi_pion_minus_stack_1->SetBinContent(108,236625);
   phi_pion_minus_stack_1->SetBinContent(109,247929);
   phi_pion_minus_stack_1->SetBinContent(110,257305);
   phi_pion_minus_stack_1->SetBinContent(111,264990);
   phi_pion_minus_stack_1->SetBinContent(112,271740);
   phi_pion_minus_stack_1->SetBinContent(113,274346);
   phi_pion_minus_stack_1->SetBinContent(114,276019);
   phi_pion_minus_stack_1->SetBinContent(115,275572);
   phi_pion_minus_stack_1->SetBinContent(116,271568);
   phi_pion_minus_stack_1->SetBinContent(117,266165);
   phi_pion_minus_stack_1->SetBinContent(118,258321);
   phi_pion_minus_stack_1->SetBinContent(119,249666);
   phi_pion_minus_stack_1->SetBinContent(120,240594);
   phi_pion_minus_stack_1->SetBinContent(121,232554);
   phi_pion_minus_stack_1->SetBinContent(122,223089);
   phi_pion_minus_stack_1->SetBinContent(123,216186);
   phi_pion_minus_stack_1->SetBinContent(124,211415);
   phi_pion_minus_stack_1->SetBinContent(125,209465);
   phi_pion_minus_stack_1->SetBinContent(126,209591);
   phi_pion_minus_stack_1->SetBinContent(127,212804);
   phi_pion_minus_stack_1->SetBinContent(128,216445);
   phi_pion_minus_stack_1->SetBinContent(129,223241);
   phi_pion_minus_stack_1->SetBinContent(130,227137);
   phi_pion_minus_stack_1->SetBinContent(131,230068);
   phi_pion_minus_stack_1->SetBinContent(132,231995);
   phi_pion_minus_stack_1->SetBinContent(133,232752);
   phi_pion_minus_stack_1->SetBinContent(134,233869);
   phi_pion_minus_stack_1->SetBinContent(135,235894);
   phi_pion_minus_stack_1->SetBinContent(136,236651);
   phi_pion_minus_stack_1->SetBinContent(137,238868);
   phi_pion_minus_stack_1->SetBinContent(138,241145);
   phi_pion_minus_stack_1->SetBinContent(139,242983);
   phi_pion_minus_stack_1->SetBinContent(140,245057);
   phi_pion_minus_stack_1->SetBinContent(141,246852);
   phi_pion_minus_stack_1->SetBinContent(142,247328);
   phi_pion_minus_stack_1->SetBinContent(143,247671);
   phi_pion_minus_stack_1->SetBinContent(144,249173);
   phi_pion_minus_stack_1->SetBinContent(145,246799);
   phi_pion_minus_stack_1->SetBinContent(146,245085);
   phi_pion_minus_stack_1->SetBinContent(147,246684);
   phi_pion_minus_stack_1->SetBinContent(148,246637);
   phi_pion_minus_stack_1->SetBinContent(149,244036);
   phi_pion_minus_stack_1->SetBinContent(150,240935);
   phi_pion_minus_stack_1->SetBinContent(151,234852);
   phi_pion_minus_stack_1->SetBinContent(152,232154);
   phi_pion_minus_stack_1->SetBinContent(153,228296);
   phi_pion_minus_stack_1->SetBinContent(154,220174);
   phi_pion_minus_stack_1->SetBinContent(155,213488);
   phi_pion_minus_stack_1->SetBinContent(156,205455);
   phi_pion_minus_stack_1->SetBinContent(157,199557);
   phi_pion_minus_stack_1->SetBinContent(158,194531);
   phi_pion_minus_stack_1->SetBinContent(159,190572);
   phi_pion_minus_stack_1->SetBinContent(160,187302);
   phi_pion_minus_stack_1->SetBinContent(161,187659);
   phi_pion_minus_stack_1->SetBinContent(162,191622);
   phi_pion_minus_stack_1->SetBinContent(163,199235);
   phi_pion_minus_stack_1->SetBinContent(164,207831);
   phi_pion_minus_stack_1->SetBinContent(165,217398);
   phi_pion_minus_stack_1->SetBinContent(166,224976);
   phi_pion_minus_stack_1->SetBinContent(167,233954);
   phi_pion_minus_stack_1->SetBinContent(168,240598);
   phi_pion_minus_stack_1->SetBinContent(169,245532);
   phi_pion_minus_stack_1->SetBinContent(170,249947);
   phi_pion_minus_stack_1->SetBinContent(171,251010);
   phi_pion_minus_stack_1->SetBinContent(172,252667);
   phi_pion_minus_stack_1->SetBinContent(173,255523);
   phi_pion_minus_stack_1->SetBinContent(174,254973);
   phi_pion_minus_stack_1->SetBinContent(175,255897);
   phi_pion_minus_stack_1->SetBinContent(176,255990);
   phi_pion_minus_stack_1->SetBinContent(177,254077);
   phi_pion_minus_stack_1->SetBinContent(178,251363);
   phi_pion_minus_stack_1->SetBinContent(179,249667);
   phi_pion_minus_stack_1->SetBinContent(180,246975);
   phi_pion_minus_stack_1->SetBinContent(181,241758);
   phi_pion_minus_stack_1->SetBinContent(182,236732);
   phi_pion_minus_stack_1->SetBinContent(183,232325);
   phi_pion_minus_stack_1->SetBinContent(184,228403);
   phi_pion_minus_stack_1->SetBinContent(185,223542);
   phi_pion_minus_stack_1->SetBinContent(186,218232);
   phi_pion_minus_stack_1->SetBinContent(187,212099);
   phi_pion_minus_stack_1->SetBinContent(188,207627);
   phi_pion_minus_stack_1->SetBinContent(189,205804);
   phi_pion_minus_stack_1->SetBinContent(190,203436);
   phi_pion_minus_stack_1->SetBinContent(191,203275);
   phi_pion_minus_stack_1->SetBinContent(192,203716);
   phi_pion_minus_stack_1->SetBinContent(193,204759);
   phi_pion_minus_stack_1->SetBinContent(194,206509);
   phi_pion_minus_stack_1->SetBinContent(195,153935);
   phi_pion_minus_stack_1->SetEntries(4.450675e+07);
   phi_pion_minus_stack_1->SetDirectory(nullptr);
   
   TPaveStats *ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#121415");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("Entries =   4.450674e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = -1.447");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  102.6");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   phi_pion_minus_stack_1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(phi_pion_minus_stack_1);

   ci = TColor::GetColor("#121415");
   phi_pion_minus_stack_1->SetLineColor(ci);
   phi_pion_minus_stack_1->GetXaxis()->SetLabelFont(42);
   phi_pion_minus_stack_1->GetXaxis()->SetTitleOffset(1);
   phi_pion_minus_stack_1->GetXaxis()->SetTitleFont(42);
   phi_pion_minus_stack_1->GetYaxis()->SetLabelFont(42);
   phi_pion_minus_stack_1->GetYaxis()->SetTitleFont(42);
   phi_pion_minus_stack_1->GetZaxis()->SetLabelFont(42);
   phi_pion_minus_stack_1->GetZaxis()->SetTitleOffset(1);
   phi_pion_minus_stack_1->GetZaxis()->SetTitleFont(42);
   hs->Add(phi_pion_minus_stack_1,"sames histo");
   
   TH1F *phi_pion_minus_stack_2 = new TH1F("phi_pion_minus_stack_2","",200,-190,190);
   phi_pion_minus_stack_2->SetBinContent(6,123389);
   phi_pion_minus_stack_2->SetBinContent(7,168484);
   phi_pion_minus_stack_2->SetBinContent(8,170479);
   phi_pion_minus_stack_2->SetBinContent(9,170890);
   phi_pion_minus_stack_2->SetBinContent(10,172256);
   phi_pion_minus_stack_2->SetBinContent(11,172033);
   phi_pion_minus_stack_2->SetBinContent(12,172574);
   phi_pion_minus_stack_2->SetBinContent(13,175725);
   phi_pion_minus_stack_2->SetBinContent(14,179724);
   phi_pion_minus_stack_2->SetBinContent(15,184110);
   phi_pion_minus_stack_2->SetBinContent(16,190354);
   phi_pion_minus_stack_2->SetBinContent(17,196365);
   phi_pion_minus_stack_2->SetBinContent(18,200835);
   phi_pion_minus_stack_2->SetBinContent(19,206285);
   phi_pion_minus_stack_2->SetBinContent(20,208721);
   phi_pion_minus_stack_2->SetBinContent(21,211172);
   phi_pion_minus_stack_2->SetBinContent(22,209741);
   phi_pion_minus_stack_2->SetBinContent(23,205307);
   phi_pion_minus_stack_2->SetBinContent(24,199658);
   phi_pion_minus_stack_2->SetBinContent(25,193480);
   phi_pion_minus_stack_2->SetBinContent(26,185984);
   phi_pion_minus_stack_2->SetBinContent(27,176923);
   phi_pion_minus_stack_2->SetBinContent(28,167284);
   phi_pion_minus_stack_2->SetBinContent(29,163014);
   phi_pion_minus_stack_2->SetBinContent(30,162165);
   phi_pion_minus_stack_2->SetBinContent(31,162524);
   phi_pion_minus_stack_2->SetBinContent(32,163950);
   phi_pion_minus_stack_2->SetBinContent(33,169537);
   phi_pion_minus_stack_2->SetBinContent(34,173683);
   phi_pion_minus_stack_2->SetBinContent(35,178038);
   phi_pion_minus_stack_2->SetBinContent(36,180836);
   phi_pion_minus_stack_2->SetBinContent(37,184737);
   phi_pion_minus_stack_2->SetBinContent(38,188864);
   phi_pion_minus_stack_2->SetBinContent(39,192679);
   phi_pion_minus_stack_2->SetBinContent(40,198101);
   phi_pion_minus_stack_2->SetBinContent(41,203499);
   phi_pion_minus_stack_2->SetBinContent(42,206107);
   phi_pion_minus_stack_2->SetBinContent(43,208878);
   phi_pion_minus_stack_2->SetBinContent(44,212941);
   phi_pion_minus_stack_2->SetBinContent(45,216493);
   phi_pion_minus_stack_2->SetBinContent(46,219104);
   phi_pion_minus_stack_2->SetBinContent(47,220164);
   phi_pion_minus_stack_2->SetBinContent(48,219478);
   phi_pion_minus_stack_2->SetBinContent(49,216692);
   phi_pion_minus_stack_2->SetBinContent(50,215769);
   phi_pion_minus_stack_2->SetBinContent(51,214006);
   phi_pion_minus_stack_2->SetBinContent(52,213043);
   phi_pion_minus_stack_2->SetBinContent(53,211898);
   phi_pion_minus_stack_2->SetBinContent(54,213516);
   phi_pion_minus_stack_2->SetBinContent(55,213569);
   phi_pion_minus_stack_2->SetBinContent(56,213714);
   phi_pion_minus_stack_2->SetBinContent(57,213676);
   phi_pion_minus_stack_2->SetBinContent(58,211589);
   phi_pion_minus_stack_2->SetBinContent(59,209216);
   phi_pion_minus_stack_2->SetBinContent(60,204945);
   phi_pion_minus_stack_2->SetBinContent(61,199534);
   phi_pion_minus_stack_2->SetBinContent(62,195047);
   phi_pion_minus_stack_2->SetBinContent(63,190883);
   phi_pion_minus_stack_2->SetBinContent(64,187587);
   phi_pion_minus_stack_2->SetBinContent(65,185970);
   phi_pion_minus_stack_2->SetBinContent(66,183065);
   phi_pion_minus_stack_2->SetBinContent(67,181432);
   phi_pion_minus_stack_2->SetBinContent(68,183262);
   phi_pion_minus_stack_2->SetBinContent(69,187119);
   phi_pion_minus_stack_2->SetBinContent(70,193083);
   phi_pion_minus_stack_2->SetBinContent(71,201447);
   phi_pion_minus_stack_2->SetBinContent(72,209033);
   phi_pion_minus_stack_2->SetBinContent(73,213517);
   phi_pion_minus_stack_2->SetBinContent(74,216771);
   phi_pion_minus_stack_2->SetBinContent(75,219007);
   phi_pion_minus_stack_2->SetBinContent(76,221131);
   phi_pion_minus_stack_2->SetBinContent(77,220739);
   phi_pion_minus_stack_2->SetBinContent(78,221781);
   phi_pion_minus_stack_2->SetBinContent(79,222303);
   phi_pion_minus_stack_2->SetBinContent(80,221990);
   phi_pion_minus_stack_2->SetBinContent(81,223143);
   phi_pion_minus_stack_2->SetBinContent(82,220386);
   phi_pion_minus_stack_2->SetBinContent(83,217870);
   phi_pion_minus_stack_2->SetBinContent(84,213034);
   phi_pion_minus_stack_2->SetBinContent(85,208590);
   phi_pion_minus_stack_2->SetBinContent(86,203999);
   phi_pion_minus_stack_2->SetBinContent(87,199033);
   phi_pion_minus_stack_2->SetBinContent(88,194229);
   phi_pion_minus_stack_2->SetBinContent(89,187237);
   phi_pion_minus_stack_2->SetBinContent(90,179012);
   phi_pion_minus_stack_2->SetBinContent(91,171623);
   phi_pion_minus_stack_2->SetBinContent(92,166794);
   phi_pion_minus_stack_2->SetBinContent(93,162435);
   phi_pion_minus_stack_2->SetBinContent(94,158863);
   phi_pion_minus_stack_2->SetBinContent(95,156505);
   phi_pion_minus_stack_2->SetBinContent(96,152492);
   phi_pion_minus_stack_2->SetBinContent(97,154960);
   phi_pion_minus_stack_2->SetBinContent(98,158176);
   phi_pion_minus_stack_2->SetBinContent(99,162765);
   phi_pion_minus_stack_2->SetBinContent(100,168540);
   phi_pion_minus_stack_2->SetBinContent(101,174475);
   phi_pion_minus_stack_2->SetBinContent(102,180616);
   phi_pion_minus_stack_2->SetBinContent(103,183289);
   phi_pion_minus_stack_2->SetBinContent(104,184067);
   phi_pion_minus_stack_2->SetBinContent(105,185461);
   phi_pion_minus_stack_2->SetBinContent(106,185140);
   phi_pion_minus_stack_2->SetBinContent(107,188087);
   phi_pion_minus_stack_2->SetBinContent(108,195036);
   phi_pion_minus_stack_2->SetBinContent(109,204011);
   phi_pion_minus_stack_2->SetBinContent(110,210576);
   phi_pion_minus_stack_2->SetBinContent(111,216136);
   phi_pion_minus_stack_2->SetBinContent(112,221411);
   phi_pion_minus_stack_2->SetBinContent(113,223605);
   phi_pion_minus_stack_2->SetBinContent(114,224512);
   phi_pion_minus_stack_2->SetBinContent(115,224172);
   phi_pion_minus_stack_2->SetBinContent(116,220625);
   phi_pion_minus_stack_2->SetBinContent(117,216616);
   phi_pion_minus_stack_2->SetBinContent(118,210071);
   phi_pion_minus_stack_2->SetBinContent(119,203504);
   phi_pion_minus_stack_2->SetBinContent(120,196547);
   phi_pion_minus_stack_2->SetBinContent(121,189607);
   phi_pion_minus_stack_2->SetBinContent(122,181731);
   phi_pion_minus_stack_2->SetBinContent(123,176399);
   phi_pion_minus_stack_2->SetBinContent(124,171462);
   phi_pion_minus_stack_2->SetBinContent(125,169314);
   phi_pion_minus_stack_2->SetBinContent(126,168749);
   phi_pion_minus_stack_2->SetBinContent(127,170956);
   phi_pion_minus_stack_2->SetBinContent(128,173626);
   phi_pion_minus_stack_2->SetBinContent(129,178596);
   phi_pion_minus_stack_2->SetBinContent(130,181661);
   phi_pion_minus_stack_2->SetBinContent(131,184287);
   phi_pion_minus_stack_2->SetBinContent(132,186511);
   phi_pion_minus_stack_2->SetBinContent(133,187493);
   phi_pion_minus_stack_2->SetBinContent(134,188987);
   phi_pion_minus_stack_2->SetBinContent(135,190644);
   phi_pion_minus_stack_2->SetBinContent(136,192075);
   phi_pion_minus_stack_2->SetBinContent(137,194069);
   phi_pion_minus_stack_2->SetBinContent(138,196164);
   phi_pion_minus_stack_2->SetBinContent(139,198304);
   phi_pion_minus_stack_2->SetBinContent(140,200101);
   phi_pion_minus_stack_2->SetBinContent(141,202257);
   phi_pion_minus_stack_2->SetBinContent(142,203228);
   phi_pion_minus_stack_2->SetBinContent(143,203371);
   phi_pion_minus_stack_2->SetBinContent(144,204007);
   phi_pion_minus_stack_2->SetBinContent(145,201837);
   phi_pion_minus_stack_2->SetBinContent(146,200532);
   phi_pion_minus_stack_2->SetBinContent(147,201485);
   phi_pion_minus_stack_2->SetBinContent(148,200961);
   phi_pion_minus_stack_2->SetBinContent(149,198054);
   phi_pion_minus_stack_2->SetBinContent(150,194757);
   phi_pion_minus_stack_2->SetBinContent(151,188795);
   phi_pion_minus_stack_2->SetBinContent(152,185610);
   phi_pion_minus_stack_2->SetBinContent(153,181659);
   phi_pion_minus_stack_2->SetBinContent(154,174271);
   phi_pion_minus_stack_2->SetBinContent(155,168724);
   phi_pion_minus_stack_2->SetBinContent(156,161876);
   phi_pion_minus_stack_2->SetBinContent(157,156683);
   phi_pion_minus_stack_2->SetBinContent(158,152943);
   phi_pion_minus_stack_2->SetBinContent(159,150182);
   phi_pion_minus_stack_2->SetBinContent(160,148437);
   phi_pion_minus_stack_2->SetBinContent(161,148910);
   phi_pion_minus_stack_2->SetBinContent(162,151692);
   phi_pion_minus_stack_2->SetBinContent(163,157214);
   phi_pion_minus_stack_2->SetBinContent(164,164546);
   phi_pion_minus_stack_2->SetBinContent(165,172198);
   phi_pion_minus_stack_2->SetBinContent(166,178507);
   phi_pion_minus_stack_2->SetBinContent(167,185573);
   phi_pion_minus_stack_2->SetBinContent(168,190964);
   phi_pion_minus_stack_2->SetBinContent(169,195634);
   phi_pion_minus_stack_2->SetBinContent(170,199802);
   phi_pion_minus_stack_2->SetBinContent(171,201563);
   phi_pion_minus_stack_2->SetBinContent(172,203545);
   phi_pion_minus_stack_2->SetBinContent(173,206819);
   phi_pion_minus_stack_2->SetBinContent(174,207018);
   phi_pion_minus_stack_2->SetBinContent(175,208739);
   phi_pion_minus_stack_2->SetBinContent(176,209469);
   phi_pion_minus_stack_2->SetBinContent(177,208860);
   phi_pion_minus_stack_2->SetBinContent(178,207048);
   phi_pion_minus_stack_2->SetBinContent(179,206380);
   phi_pion_minus_stack_2->SetBinContent(180,203626);
   phi_pion_minus_stack_2->SetBinContent(181,199242);
   phi_pion_minus_stack_2->SetBinContent(182,194532);
   phi_pion_minus_stack_2->SetBinContent(183,190235);
   phi_pion_minus_stack_2->SetBinContent(184,185879);
   phi_pion_minus_stack_2->SetBinContent(185,181561);
   phi_pion_minus_stack_2->SetBinContent(186,176491);
   phi_pion_minus_stack_2->SetBinContent(187,170764);
   phi_pion_minus_stack_2->SetBinContent(188,166603);
   phi_pion_minus_stack_2->SetBinContent(189,164424);
   phi_pion_minus_stack_2->SetBinContent(190,162409);
   phi_pion_minus_stack_2->SetBinContent(191,162084);
   phi_pion_minus_stack_2->SetBinContent(192,162031);
   phi_pion_minus_stack_2->SetBinContent(193,163537);
   phi_pion_minus_stack_2->SetBinContent(194,164495);
   phi_pion_minus_stack_2->SetBinContent(195,122821);
   phi_pion_minus_stack_2->SetEntries(3.611616e+07);
   
   ptstats = new TPaveStats(0.52,0.835,0.75,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#0c5da5");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   3.611616e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = -1.935");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  102.6");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   phi_pion_minus_stack_2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(phi_pion_minus_stack_2);

   ci = 1185;
   color = new TColor(ci, 0.04705882, 0.3647059, 0.6470588, " ", 0.15);
   phi_pion_minus_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#0c5da5");
   phi_pion_minus_stack_2->SetLineColor(ci);
   phi_pion_minus_stack_2->GetXaxis()->SetLabelFont(42);
   phi_pion_minus_stack_2->GetXaxis()->SetTitleOffset(1);
   phi_pion_minus_stack_2->GetXaxis()->SetTitleFont(42);
   phi_pion_minus_stack_2->GetYaxis()->SetLabelFont(42);
   phi_pion_minus_stack_2->GetYaxis()->SetTitleFont(42);
   phi_pion_minus_stack_2->GetZaxis()->SetLabelFont(42);
   phi_pion_minus_stack_2->GetZaxis()->SetTitleOffset(1);
   phi_pion_minus_stack_2->GetZaxis()->SetTitleFont(42);
   hs->Add(phi_pion_minus_stack_2,"sames histo");
   hs->Draw("hist nostack");
   
   ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#121415");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   4.450674e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = -1.447");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  102.6");
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
   ptstats_LaTex = ptstats->AddText("Entries =   3.611616e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = -1.935");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  102.6");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
