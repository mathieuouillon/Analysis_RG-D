#ifdef __CLING__
#pragma cling optimize(0)
#endif
void p_e()
{
//=========Macro generated from canvas: c1/
//=========  (Sat Oct 26 16:00:07 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   gStyle->SetOptFit(1);
   c1->SetHighLightColor(2);
   c1->Range(-1.736842,-83013.54,12.73684,608765.9);
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
   hs->SetMaximum(525752.4);
   
   TH1F *hs_stack_23 = new TH1F("hs_stack_23","",200,0,11);
   hs_stack_23->SetMinimum(0);
   hs_stack_23->SetMaximum(525752.4);
   hs_stack_23->SetDirectory(nullptr);
   hs_stack_23->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_23->SetLineColor(ci);
   hs_stack_23->SetLineWidth(0);
   hs_stack_23->GetXaxis()->SetTitle("p_{e} [GeV/c]");
   hs_stack_23->GetXaxis()->SetLabelFont(42);
   hs_stack_23->GetXaxis()->SetTitleSize(0.05);
   hs_stack_23->GetXaxis()->SetTitleOffset(1);
   hs_stack_23->GetXaxis()->SetTitleFont(42);
   hs_stack_23->GetYaxis()->SetLabelFont(42);
   hs_stack_23->GetYaxis()->SetTitleFont(42);
   hs_stack_23->GetZaxis()->SetLabelFont(42);
   hs_stack_23->GetZaxis()->SetTitleOffset(1);
   hs_stack_23->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_23);
   
   
   TH1F *p_e_stack_1 = new TH1F("p_e_stack_1","",200,0,11);
   p_e_stack_1->SetBinContent(11,1);
   p_e_stack_1->SetBinContent(12,13);
   p_e_stack_1->SetBinContent(13,56);
   p_e_stack_1->SetBinContent(14,198);
   p_e_stack_1->SetBinContent(15,14745);
   p_e_stack_1->SetBinContent(16,77167);
   p_e_stack_1->SetBinContent(17,137764);
   p_e_stack_1->SetBinContent(18,183033);
   p_e_stack_1->SetBinContent(19,198081);
   p_e_stack_1->SetBinContent(20,219890);
   p_e_stack_1->SetBinContent(21,246550);
   p_e_stack_1->SetBinContent(22,284077);
   p_e_stack_1->SetBinContent(23,330286);
   p_e_stack_1->SetBinContent(24,377657);
   p_e_stack_1->SetBinContent(25,413831);
   p_e_stack_1->SetBinContent(26,434276);
   p_e_stack_1->SetBinContent(27,438127);
   p_e_stack_1->SetBinContent(28,434191);
   p_e_stack_1->SetBinContent(29,427297);
   p_e_stack_1->SetBinContent(30,416680);
   p_e_stack_1->SetBinContent(31,406682);
   p_e_stack_1->SetBinContent(32,396175);
   p_e_stack_1->SetBinContent(33,384657);
   p_e_stack_1->SetBinContent(34,376284);
   p_e_stack_1->SetBinContent(35,367000);
   p_e_stack_1->SetBinContent(36,359564);
   p_e_stack_1->SetBinContent(37,352925);
   p_e_stack_1->SetBinContent(38,346227);
   p_e_stack_1->SetBinContent(39,342150);
   p_e_stack_1->SetBinContent(40,337466);
   p_e_stack_1->SetBinContent(41,333328);
   p_e_stack_1->SetBinContent(42,329323);
   p_e_stack_1->SetBinContent(43,325903);
   p_e_stack_1->SetBinContent(44,322351);
   p_e_stack_1->SetBinContent(45,319961);
   p_e_stack_1->SetBinContent(46,316693);
   p_e_stack_1->SetBinContent(47,313176);
   p_e_stack_1->SetBinContent(48,311792);
   p_e_stack_1->SetBinContent(49,310348);
   p_e_stack_1->SetBinContent(50,308244);
   p_e_stack_1->SetBinContent(51,306065);
   p_e_stack_1->SetBinContent(52,303293);
   p_e_stack_1->SetBinContent(53,302652);
   p_e_stack_1->SetBinContent(54,301460);
   p_e_stack_1->SetBinContent(55,300448);
   p_e_stack_1->SetBinContent(56,299023);
   p_e_stack_1->SetBinContent(57,297845);
   p_e_stack_1->SetBinContent(58,295256);
   p_e_stack_1->SetBinContent(59,293529);
   p_e_stack_1->SetBinContent(60,294285);
   p_e_stack_1->SetBinContent(61,291738);
   p_e_stack_1->SetBinContent(62,292675);
   p_e_stack_1->SetBinContent(63,292118);
   p_e_stack_1->SetBinContent(64,291820);
   p_e_stack_1->SetBinContent(65,292746);
   p_e_stack_1->SetBinContent(66,292687);
   p_e_stack_1->SetBinContent(67,293465);
   p_e_stack_1->SetBinContent(68,292910);
   p_e_stack_1->SetBinContent(69,291226);
   p_e_stack_1->SetBinContent(70,291963);
   p_e_stack_1->SetBinContent(71,292322);
   p_e_stack_1->SetBinContent(72,290799);
   p_e_stack_1->SetBinContent(73,290883);
   p_e_stack_1->SetBinContent(74,290335);
   p_e_stack_1->SetBinContent(75,290697);
   p_e_stack_1->SetBinContent(76,289279);
   p_e_stack_1->SetBinContent(77,289550);
   p_e_stack_1->SetBinContent(78,288916);
   p_e_stack_1->SetBinContent(79,289740);
   p_e_stack_1->SetBinContent(80,288435);
   p_e_stack_1->SetBinContent(81,288116);
   p_e_stack_1->SetBinContent(82,288528);
   p_e_stack_1->SetBinContent(83,287533);
   p_e_stack_1->SetBinContent(84,286879);
   p_e_stack_1->SetBinContent(85,286198);
   p_e_stack_1->SetBinContent(86,286747);
   p_e_stack_1->SetBinContent(87,286870);
   p_e_stack_1->SetBinContent(88,286313);
   p_e_stack_1->SetBinContent(89,285986);
   p_e_stack_1->SetBinContent(90,286565);
   p_e_stack_1->SetBinContent(91,286022);
   p_e_stack_1->SetBinContent(92,286272);
   p_e_stack_1->SetBinContent(93,284296);
   p_e_stack_1->SetBinContent(94,283665);
   p_e_stack_1->SetBinContent(95,283505);
   p_e_stack_1->SetBinContent(96,281833);
   p_e_stack_1->SetBinContent(97,281164);
   p_e_stack_1->SetBinContent(98,278566);
   p_e_stack_1->SetBinContent(99,278216);
   p_e_stack_1->SetBinContent(100,276875);
   p_e_stack_1->SetBinContent(101,275823);
   p_e_stack_1->SetBinContent(102,274292);
   p_e_stack_1->SetBinContent(103,272096);
   p_e_stack_1->SetBinContent(104,271155);
   p_e_stack_1->SetBinContent(105,269127);
   p_e_stack_1->SetBinContent(106,267599);
   p_e_stack_1->SetBinContent(107,266104);
   p_e_stack_1->SetBinContent(108,264300);
   p_e_stack_1->SetBinContent(109,262455);
   p_e_stack_1->SetBinContent(110,260178);
   p_e_stack_1->SetBinContent(111,258470);
   p_e_stack_1->SetBinContent(112,257171);
   p_e_stack_1->SetBinContent(113,255105);
   p_e_stack_1->SetBinContent(114,253331);
   p_e_stack_1->SetBinContent(115,250975);
   p_e_stack_1->SetBinContent(116,248229);
   p_e_stack_1->SetBinContent(117,247411);
   p_e_stack_1->SetBinContent(118,244641);
   p_e_stack_1->SetBinContent(119,241176);
   p_e_stack_1->SetBinContent(120,239847);
   p_e_stack_1->SetBinContent(121,237062);
   p_e_stack_1->SetBinContent(122,234381);
   p_e_stack_1->SetBinContent(123,232171);
   p_e_stack_1->SetBinContent(124,229552);
   p_e_stack_1->SetBinContent(125,226506);
   p_e_stack_1->SetBinContent(126,223375);
   p_e_stack_1->SetBinContent(127,220939);
   p_e_stack_1->SetBinContent(128,217791);
   p_e_stack_1->SetBinContent(129,214314);
   p_e_stack_1->SetBinContent(130,211697);
   p_e_stack_1->SetBinContent(131,209145);
   p_e_stack_1->SetBinContent(132,205586);
   p_e_stack_1->SetBinContent(133,200973);
   p_e_stack_1->SetBinContent(134,198057);
   p_e_stack_1->SetBinContent(135,194241);
   p_e_stack_1->SetBinContent(136,190804);
   p_e_stack_1->SetBinContent(137,186775);
   p_e_stack_1->SetBinContent(138,182755);
   p_e_stack_1->SetBinContent(139,178683);
   p_e_stack_1->SetBinContent(140,174433);
   p_e_stack_1->SetBinContent(141,171194);
   p_e_stack_1->SetBinContent(142,166537);
   p_e_stack_1->SetBinContent(143,162041);
   p_e_stack_1->SetBinContent(144,157703);
   p_e_stack_1->SetBinContent(145,153546);
   p_e_stack_1->SetBinContent(146,148659);
   p_e_stack_1->SetBinContent(147,144892);
   p_e_stack_1->SetBinContent(148,139979);
   p_e_stack_1->SetBinContent(149,135101);
   p_e_stack_1->SetBinContent(150,130043);
   p_e_stack_1->SetBinContent(151,125802);
   p_e_stack_1->SetBinContent(152,121052);
   p_e_stack_1->SetBinContent(153,115315);
   p_e_stack_1->SetBinContent(154,109626);
   p_e_stack_1->SetBinContent(155,105924);
   p_e_stack_1->SetBinContent(156,99447);
   p_e_stack_1->SetBinContent(157,94184);
   p_e_stack_1->SetBinContent(158,88984);
   p_e_stack_1->SetBinContent(159,84682);
   p_e_stack_1->SetBinContent(160,78324);
   p_e_stack_1->SetBinContent(161,73694);
   p_e_stack_1->SetBinContent(162,67631);
   p_e_stack_1->SetBinContent(163,62554);
   p_e_stack_1->SetBinContent(164,56693);
   p_e_stack_1->SetBinContent(165,51161);
   p_e_stack_1->SetBinContent(166,46134);
   p_e_stack_1->SetBinContent(167,41256);
   p_e_stack_1->SetBinContent(168,37258);
   p_e_stack_1->SetBinContent(169,32826);
   p_e_stack_1->SetBinContent(170,28788);
   p_e_stack_1->SetBinContent(171,25578);
   p_e_stack_1->SetBinContent(172,22960);
   p_e_stack_1->SetBinContent(173,20880);
   p_e_stack_1->SetBinContent(174,18695);
   p_e_stack_1->SetBinContent(175,16866);
   p_e_stack_1->SetBinContent(176,14791);
   p_e_stack_1->SetBinContent(177,12787);
   p_e_stack_1->SetBinContent(178,11350);
   p_e_stack_1->SetBinContent(179,10372);
   p_e_stack_1->SetBinContent(180,9417);
   p_e_stack_1->SetBinContent(181,7856);
   p_e_stack_1->SetBinContent(182,6019);
   p_e_stack_1->SetBinContent(183,3692);
   p_e_stack_1->SetBinContent(184,2009);
   p_e_stack_1->SetBinContent(185,975);
   p_e_stack_1->SetBinContent(186,574);
   p_e_stack_1->SetBinContent(187,385);
   p_e_stack_1->SetBinContent(188,266);
   p_e_stack_1->SetBinContent(189,248);
   p_e_stack_1->SetBinContent(190,248);
   p_e_stack_1->SetBinContent(191,218);
   p_e_stack_1->SetBinContent(192,170);
   p_e_stack_1->SetBinContent(193,180);
   p_e_stack_1->SetBinContent(194,150);
   p_e_stack_1->SetBinContent(195,165);
   p_e_stack_1->SetBinContent(196,150);
   p_e_stack_1->SetBinContent(197,114);
   p_e_stack_1->SetBinContent(198,125);
   p_e_stack_1->SetBinContent(199,118);
   p_e_stack_1->SetBinContent(200,108);
   p_e_stack_1->SetBinContent(201,1485);
   p_e_stack_1->SetEntries(3.857118e+07);
   p_e_stack_1->SetDirectory(nullptr);
   
   TPaveStats *ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#121415");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("Entries =   3.857118e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  4.372");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  2.202");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   p_e_stack_1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(p_e_stack_1);

   ci = TColor::GetColor("#121415");
   p_e_stack_1->SetLineColor(ci);
   p_e_stack_1->GetXaxis()->SetLabelFont(42);
   p_e_stack_1->GetXaxis()->SetTitleOffset(1);
   p_e_stack_1->GetXaxis()->SetTitleFont(42);
   p_e_stack_1->GetYaxis()->SetLabelFont(42);
   p_e_stack_1->GetYaxis()->SetTitleFont(42);
   p_e_stack_1->GetZaxis()->SetLabelFont(42);
   p_e_stack_1->GetZaxis()->SetTitleOffset(1);
   p_e_stack_1->GetZaxis()->SetTitleFont(42);
   hs->Add(p_e_stack_1,"sames histo");
   
   TH1F *p_e_stack_2 = new TH1F("p_e_stack_2","",200,0,11);
   p_e_stack_2->SetBinContent(13,2);
   p_e_stack_2->SetBinContent(14,3);
   p_e_stack_2->SetBinContent(15,13095);
   p_e_stack_2->SetBinContent(16,71163);
   p_e_stack_2->SetBinContent(17,117414);
   p_e_stack_2->SetBinContent(18,148725);
   p_e_stack_2->SetBinContent(19,162956);
   p_e_stack_2->SetBinContent(20,183364);
   p_e_stack_2->SetBinContent(21,208862);
   p_e_stack_2->SetBinContent(22,243645);
   p_e_stack_2->SetBinContent(23,286234);
   p_e_stack_2->SetBinContent(24,329033);
   p_e_stack_2->SetBinContent(25,362190);
   p_e_stack_2->SetBinContent(26,382037);
   p_e_stack_2->SetBinContent(27,386158);
   p_e_stack_2->SetBinContent(28,383877);
   p_e_stack_2->SetBinContent(29,379119);
   p_e_stack_2->SetBinContent(30,370184);
   p_e_stack_2->SetBinContent(31,362371);
   p_e_stack_2->SetBinContent(32,354014);
   p_e_stack_2->SetBinContent(33,344200);
   p_e_stack_2->SetBinContent(34,337491);
   p_e_stack_2->SetBinContent(35,330176);
   p_e_stack_2->SetBinContent(36,324021);
   p_e_stack_2->SetBinContent(37,318934);
   p_e_stack_2->SetBinContent(38,313550);
   p_e_stack_2->SetBinContent(39,310569);
   p_e_stack_2->SetBinContent(40,307005);
   p_e_stack_2->SetBinContent(41,303324);
   p_e_stack_2->SetBinContent(42,300644);
   p_e_stack_2->SetBinContent(43,297711);
   p_e_stack_2->SetBinContent(44,294992);
   p_e_stack_2->SetBinContent(45,293335);
   p_e_stack_2->SetBinContent(46,290983);
   p_e_stack_2->SetBinContent(47,288105);
   p_e_stack_2->SetBinContent(48,287201);
   p_e_stack_2->SetBinContent(49,285985);
   p_e_stack_2->SetBinContent(50,284739);
   p_e_stack_2->SetBinContent(51,283061);
   p_e_stack_2->SetBinContent(52,280641);
   p_e_stack_2->SetBinContent(53,280293);
   p_e_stack_2->SetBinContent(54,279469);
   p_e_stack_2->SetBinContent(55,279037);
   p_e_stack_2->SetBinContent(56,277782);
   p_e_stack_2->SetBinContent(57,276877);
   p_e_stack_2->SetBinContent(58,274851);
   p_e_stack_2->SetBinContent(59,273435);
   p_e_stack_2->SetBinContent(60,274468);
   p_e_stack_2->SetBinContent(61,272147);
   p_e_stack_2->SetBinContent(62,273308);
   p_e_stack_2->SetBinContent(63,273099);
   p_e_stack_2->SetBinContent(64,272804);
   p_e_stack_2->SetBinContent(65,274020);
   p_e_stack_2->SetBinContent(66,274080);
   p_e_stack_2->SetBinContent(67,274982);
   p_e_stack_2->SetBinContent(68,274642);
   p_e_stack_2->SetBinContent(69,273318);
   p_e_stack_2->SetBinContent(70,273978);
   p_e_stack_2->SetBinContent(71,274557);
   p_e_stack_2->SetBinContent(72,273205);
   p_e_stack_2->SetBinContent(73,273453);
   p_e_stack_2->SetBinContent(74,272982);
   p_e_stack_2->SetBinContent(75,273541);
   p_e_stack_2->SetBinContent(76,272410);
   p_e_stack_2->SetBinContent(77,272812);
   p_e_stack_2->SetBinContent(78,272336);
   p_e_stack_2->SetBinContent(79,273364);
   p_e_stack_2->SetBinContent(80,272304);
   p_e_stack_2->SetBinContent(81,272266);
   p_e_stack_2->SetBinContent(82,272973);
   p_e_stack_2->SetBinContent(83,271803);
   p_e_stack_2->SetBinContent(84,271434);
   p_e_stack_2->SetBinContent(85,271043);
   p_e_stack_2->SetBinContent(86,271714);
   p_e_stack_2->SetBinContent(87,271935);
   p_e_stack_2->SetBinContent(88,271466);
   p_e_stack_2->SetBinContent(89,271730);
   p_e_stack_2->SetBinContent(90,272075);
   p_e_stack_2->SetBinContent(91,271923);
   p_e_stack_2->SetBinContent(92,272418);
   p_e_stack_2->SetBinContent(93,270530);
   p_e_stack_2->SetBinContent(94,270218);
   p_e_stack_2->SetBinContent(95,269835);
   p_e_stack_2->SetBinContent(96,268780);
   p_e_stack_2->SetBinContent(97,268291);
   p_e_stack_2->SetBinContent(98,265975);
   p_e_stack_2->SetBinContent(99,265814);
   p_e_stack_2->SetBinContent(100,264670);
   p_e_stack_2->SetBinContent(101,263703);
   p_e_stack_2->SetBinContent(102,262464);
   p_e_stack_2->SetBinContent(103,260554);
   p_e_stack_2->SetBinContent(104,259877);
   p_e_stack_2->SetBinContent(105,257981);
   p_e_stack_2->SetBinContent(106,256714);
   p_e_stack_2->SetBinContent(107,255340);
   p_e_stack_2->SetBinContent(108,253897);
   p_e_stack_2->SetBinContent(109,252308);
   p_e_stack_2->SetBinContent(110,250163);
   p_e_stack_2->SetBinContent(111,248649);
   p_e_stack_2->SetBinContent(112,247721);
   p_e_stack_2->SetBinContent(113,245753);
   p_e_stack_2->SetBinContent(114,244186);
   p_e_stack_2->SetBinContent(115,242021);
   p_e_stack_2->SetBinContent(116,239514);
   p_e_stack_2->SetBinContent(117,238951);
   p_e_stack_2->SetBinContent(118,236217);
   p_e_stack_2->SetBinContent(119,233031);
   p_e_stack_2->SetBinContent(120,232030);
   p_e_stack_2->SetBinContent(121,229282);
   p_e_stack_2->SetBinContent(122,226917);
   p_e_stack_2->SetBinContent(123,224796);
   p_e_stack_2->SetBinContent(124,222365);
   p_e_stack_2->SetBinContent(125,219663);
   p_e_stack_2->SetBinContent(126,216647);
   p_e_stack_2->SetBinContent(127,214441);
   p_e_stack_2->SetBinContent(128,211517);
   p_e_stack_2->SetBinContent(129,208195);
   p_e_stack_2->SetBinContent(130,205760);
   p_e_stack_2->SetBinContent(131,203379);
   p_e_stack_2->SetBinContent(132,199838);
   p_e_stack_2->SetBinContent(133,195418);
   p_e_stack_2->SetBinContent(134,192764);
   p_e_stack_2->SetBinContent(135,189198);
   p_e_stack_2->SetBinContent(136,185821);
   p_e_stack_2->SetBinContent(137,181997);
   p_e_stack_2->SetBinContent(138,178226);
   p_e_stack_2->SetBinContent(139,174266);
   p_e_stack_2->SetBinContent(140,170225);
   p_e_stack_2->SetBinContent(141,167145);
   p_e_stack_2->SetBinContent(142,162653);
   p_e_stack_2->SetBinContent(143,158267);
   p_e_stack_2->SetBinContent(144,154114);
   p_e_stack_2->SetBinContent(145,150083);
   p_e_stack_2->SetBinContent(146,145361);
   p_e_stack_2->SetBinContent(147,141710);
   p_e_stack_2->SetBinContent(148,136928);
   p_e_stack_2->SetBinContent(149,132119);
   p_e_stack_2->SetBinContent(150,127312);
   p_e_stack_2->SetBinContent(151,123115);
   p_e_stack_2->SetBinContent(152,118486);
   p_e_stack_2->SetBinContent(153,112937);
   p_e_stack_2->SetBinContent(154,107343);
   p_e_stack_2->SetBinContent(155,103760);
   p_e_stack_2->SetBinContent(156,97381);
   p_e_stack_2->SetBinContent(157,92274);
   p_e_stack_2->SetBinContent(158,87182);
   p_e_stack_2->SetBinContent(159,83019);
   p_e_stack_2->SetBinContent(160,76683);
   p_e_stack_2->SetBinContent(161,72147);
   p_e_stack_2->SetBinContent(162,66149);
   p_e_stack_2->SetBinContent(163,61174);
   p_e_stack_2->SetBinContent(164,55521);
   p_e_stack_2->SetBinContent(165,49994);
   p_e_stack_2->SetBinContent(166,45008);
   p_e_stack_2->SetBinContent(167,40224);
   p_e_stack_2->SetBinContent(168,36237);
   p_e_stack_2->SetBinContent(169,31894);
   p_e_stack_2->SetBinContent(170,27968);
   p_e_stack_2->SetBinContent(171,24765);
   p_e_stack_2->SetBinContent(172,22250);
   p_e_stack_2->SetBinContent(173,20173);
   p_e_stack_2->SetBinContent(174,18118);
   p_e_stack_2->SetBinContent(175,16289);
   p_e_stack_2->SetBinContent(176,14237);
   p_e_stack_2->SetBinContent(177,12323);
   p_e_stack_2->SetBinContent(178,10894);
   p_e_stack_2->SetBinContent(179,9942);
   p_e_stack_2->SetBinContent(180,8978);
   p_e_stack_2->SetBinContent(181,7483);
   p_e_stack_2->SetBinContent(182,5692);
   p_e_stack_2->SetBinContent(183,3387);
   p_e_stack_2->SetBinContent(184,1746);
   p_e_stack_2->SetBinContent(185,731);
   p_e_stack_2->SetBinContent(186,342);
   p_e_stack_2->SetBinContent(187,166);
   p_e_stack_2->SetBinContent(188,96);
   p_e_stack_2->SetBinContent(189,75);
   p_e_stack_2->SetBinContent(190,58);
   p_e_stack_2->SetBinContent(191,47);
   p_e_stack_2->SetBinContent(192,35);
   p_e_stack_2->SetBinContent(193,41);
   p_e_stack_2->SetBinContent(194,38);
   p_e_stack_2->SetBinContent(195,36);
   p_e_stack_2->SetBinContent(196,30);
   p_e_stack_2->SetBinContent(197,28);
   p_e_stack_2->SetBinContent(198,34);
   p_e_stack_2->SetBinContent(199,31);
   p_e_stack_2->SetBinContent(200,22);
   p_e_stack_2->SetBinContent(201,297);
   p_e_stack_2->SetEntries(3.608592e+07);
   
   ptstats = new TPaveStats(0.52,0.835,0.75,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#0c5da5");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   3.608592e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  4.445");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  2.199");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   p_e_stack_2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(p_e_stack_2);

   ci = 1185;
   color = new TColor(ci, 0.04705882, 0.3647059, 0.6470588, " ", 0.15);
   p_e_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#0c5da5");
   p_e_stack_2->SetLineColor(ci);
   p_e_stack_2->GetXaxis()->SetLabelFont(42);
   p_e_stack_2->GetXaxis()->SetTitleOffset(1);
   p_e_stack_2->GetXaxis()->SetTitleFont(42);
   p_e_stack_2->GetYaxis()->SetLabelFont(42);
   p_e_stack_2->GetYaxis()->SetTitleFont(42);
   p_e_stack_2->GetZaxis()->SetLabelFont(42);
   p_e_stack_2->GetZaxis()->SetTitleOffset(1);
   p_e_stack_2->GetZaxis()->SetTitleFont(42);
   hs->Add(p_e_stack_2,"sames histo");
   hs->Draw("hist nostack");
   
   ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#121415");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   3.857118e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  4.372");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  2.202");
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
   ptstats_LaTex = ptstats->AddText("Entries =   3.608592e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  4.445");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  2.199");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
