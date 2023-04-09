package energyCalc

import chiseltest._

class CalculateEnergyTest extends TestWithBackendSelect with ChiselScalatestTester {
    behavior of "EnergyCal"

    it should "do energy minimization calculation" in {
        test(new EnergyCal()).withAnnotations(simAnnos) { c =>
        // This test is the same as the one in the keccak code on github
        // https://github.com/gvanas/KeccakCodePackage/blob/master/TestVectors/KeccakF-1600-IntermediateValues.txt
        
        val maxHalfNonBonded = 50;
        val maxNonBonded = 2090;
        val maxData = 116;
        val maxSolvated = 288;
        
        val halfNonBondedTermsInput = Array(
            Float(0.0), Float(0.0), Float(0.0), Float(255129.19124912436),Float(294.523217993277),
            Float(0.0), Float(3.0), Float(1.0), Float(16769.154260715502),Float(41.6253327498216),
            Float(0.0), Float(4.0), Float(0.0), Float(268958.94761729415),Float(270.8473276589335),
            Float(1.0), Float(2.0), Float(1.0), Float(693.4931247193746),Float(7.581677621730323),
            Float(1.0), Float(9.0), Float(1.0), Float(277.19194769650824),Float(5.642025337251472),
            Float(2.0), Float(2.0), Float(0.0), Float(281819.4404219364),Float(248.3185287148932),
            Float(2.0), Float(9.0), Float(0.0), Float(175033.92491983433),Float(230.34843238912364),
            Float(3.0), Float(8.0), Float(1.0), Float(16259.877827101369),Float(34.567913166684995),
            Float(4.0), Float(8.0), Float(0.0), Float(249868.50984670786),Float(220.16572257904343),
            Float(17.0), Float(8.0), Float(0.0), Float(221539.97651666112),Float(195.20470602661516)
        )

        val nonBondedTermsInput = Array(
            Float(0.0), Float(0.0), Float(0.0), Float(510258.3824982487),Float(589.046435986554),
            Float(0.0), Float(1.0), Float(1.0), Float(1148.812053712031),Float(15.407835318454358),
            Float(0.0), Float(2.0), Float(0.0), Float(537917.8952345883),Float(541.694655317867),
            Float(0.0), Float(3.0), Float(1.0), Float(33538.308521431005),Float(83.2506654996432),
            Float(0.0), Float(4.0), Float(1.0), Float(33538.308521431005),Float(83.2506654996432),
            Float(0.0), Float(5.0), Float(0.0), Float(476932.11902241065),Float(480.2806936013841),
            Float(0.0), Float(6.0), Float(0.0), Float(327906.40693065047),Float(497.8196081624768),
            Float(1.0), Float(0.0), Float(1.0), Float(1148.812053712031),Float(15.407835318454358),
            Float(1.0), Float(1.0), Float(1.0), Float(0.07564113888246708),Float(0.06892215422038196),
            Float(1.0), Float(2.0), Float(1.0), Float(1386.9862494387492),Float(15.163355243460646),
            Float(1.0), Float(3.0), Float(1.0), Float(32.13344399174506),Float(1.420556301753841),
            Float(1.0), Float(4.0), Float(1.0), Float(32.13344399174506),Float(1.420556301753841),
            Float(1.0), Float(5.0), Float(1.0), Float(1229.738398480471),Float(13.44422859291455),
            Float(1.0), Float(6.0), Float(1.0), Float(554.3838953930165),Float(11.284050674502945),
            Float(2.0), Float(0.0), Float(0.0), Float(537917.8952345883),Float(541.694655317867),
            Float(2.0), Float(1.0), Float(1.0), Float(1386.9862494387492),Float(15.163355243460646),
            Float(2.0), Float(2.0), Float(0.0), Float(563638.8808438728),Float(496.6370574297864),
            Float(2.0), Float(3.0), Float(1.0), Float(36678.08859446906),Float(77.97629201987739),
            Float(2.0), Float(4.0), Float(1.0), Float(36678.08859446906),Float(77.97629201987739),
            Float(2.0), Float(5.0), Float(0.0), Float(499737.0196934157),Float(440.33144515808686),
            Float(2.0), Float(6.0), Float(0.0), Float(350067.84983966866),Float(460.6968647782473),
            Float(3.0), Float(0.0), Float(1.0), Float(33538.308521431005),Float(83.2506654996432),
            Float(3.0), Float(1.0), Float(1.0), Float(32.13344399174506),Float(1.420556301753841),
            Float(3.0), Float(2.0), Float(1.0), Float(36678.08859446906),Float(77.97629201987739),
            Float(3.0), Float(3.0), Float(1.0), Float(1761.4091487373335),Float(10.517437442750753),
            Float(3.0), Float(4.0), Float(1.0), Float(1761.4091487373335),Float(10.517437442750753),
            Float(3.0), Float(5.0), Float(1.0), Float(32519.755654202738),Float(69.13582633336999),
            Float(3.0), Float(6.0), Float(1.0), Float(19964.76700670687),Float(67.71608603212646),
            Float(4.0), Float(0.0), Float(0.0), Float(537917.8952345883),Float(541.694655317867),
            Float(4.0), Float(1.0), Float(1.0), Float(1386.9862494387492),Float(15.163355243460646),
            Float(4.0), Float(2.0), Float(0.0), Float(563638.8808438728),Float(496.6370574297864),
            Float(4.0), Float(3.0), Float(1.0), Float(36678.08859446906),Float(77.97629201987739),
            Float(4.0), Float(4.0), Float(1.0), Float(36678.08859446906),Float(77.97629201987739),
            Float(4.0), Float(5.0), Float(0.0), Float(499737.0196934157),Float(440.33144515808686),
            Float(4.0), Float(6.0), Float(0.0), Float(350067.84983966866),Float(460.6968647782473),
            Float(5.0), Float(0.0), Float(1.0), Float(48458.24674076813),Float(100.06932829285793),
            Float(5.0), Float(1.0), Float(1.0), Float(57.92316966000593),Float(1.9072427525722235),
            Float(5.0), Float(2.0), Float(1.0), Float(52507.22301054839),Float(93.2972315451603),
            Float(5.0), Float(3.0), Float(1.0), Float(2694.1636998038007),Float(13.007439177501805),
            Float(5.0), Float(4.0), Float(1.0), Float(2694.1636998038007),Float(13.007439177501805),
            Float(5.0), Float(5.0), Float(1.0), Float(46554.28152930668),Float(82.71977328501536),
            Float(5.0), Float(6.0), Float(1.0), Float(29409.697340082446),Float(82.18735472844895),
            Float(6.0), Float(0.0), Float(1.0), Float(48458.24674076813),Float(100.06932829285793),
            Float(6.0), Float(1.0), Float(1.0), Float(57.92316966000593),Float(1.9072427525722235),
            Float(6.0), Float(2.0), Float(1.0), Float(52507.22301054839),Float(93.2972315451603),
            Float(6.0), Float(3.0), Float(1.0), Float(2694.1636998038007),Float(13.007439177501805),
            Float(6.0), Float(4.0), Float(1.0), Float(2694.1636998038007),Float(13.007439177501805),
            Float(6.0), Float(5.0), Float(1.0), Float(46554.28152930668),Float(82.71977328501536),
            Float(6.0), Float(6.0), Float(1.0), Float(29409.697340082446),Float(82.18735472844895),
            Float(7.0), Float(0.0), Float(0.0), Float(537917.8952345883),Float(541.694655317867),
            Float(7.0), Float(1.0), Float(1.0), Float(1386.9862494387492),Float(15.163355243460646),
            Float(7.0), Float(2.0), Float(0.0), Float(563638.8808438728),Float(496.6370574297864),
            Float(7.0), Float(3.0), Float(1.0), Float(36678.08859446906),Float(77.97629201987739),
            Float(7.0), Float(4.0), Float(1.0), Float(36678.08859446906),Float(77.97629201987739),
            Float(7.0), Float(5.0), Float(0.0), Float(499737.0196934157),Float(440.33144515808686),
            Float(7.0), Float(6.0), Float(0.0), Float(350067.84983966866),Float(460.6968647782473),
            Float(8.0), Float(0.0), Float(1.0), Float(48458.24674076813),Float(100.06932829285793),
            Float(8.0), Float(1.0), Float(1.0), Float(57.92316966000593),Float(1.9072427525722235),
            Float(8.0), Float(2.0), Float(1.0), Float(52507.22301054839),Float(93.2972315451603),
            Float(8.0), Float(3.0), Float(1.0), Float(2694.1636998038007),Float(13.007439177501805),
            Float(8.0), Float(4.0), Float(1.0), Float(2694.1636998038007),Float(13.007439177501805),
            Float(8.0), Float(5.0), Float(1.0), Float(46554.28152930668),Float(82.71977328501536),
            Float(8.0), Float(6.0), Float(1.0), Float(29409.697340082446),Float(82.18735472844895),
            Float(9.0), Float(0.0), Float(0.0), Float(537917.8952345883),Float(541.694655317867),
            Float(9.0), Float(1.0), Float(1.0), Float(1386.9862494387492),Float(15.163355243460646),
            Float(9.0), Float(2.0), Float(0.0), Float(563638.8808438728),Float(496.6370574297864),
            Float(9.0), Float(3.0), Float(1.0), Float(36678.08859446906),Float(77.97629201987739),
            Float(9.0), Float(4.0), Float(1.0), Float(36678.08859446906),Float(77.97629201987739),
            Float(9.0), Float(5.0), Float(0.0), Float(499737.0196934157),Float(440.33144515808686),
            Float(9.0), Float(6.0), Float(0.0), Float(350067.84983966866),Float(460.6968647782473),
            Float(10.0), Float(0.0), Float(1.0), Float(48458.24674076813),Float(100.06932829285793),
            Float(10.0), Float(1.0), Float(1.0), Float(57.92316966000593),Float(1.9072427525722235),
            Float(10.0), Float(2.0), Float(1.0), Float(52507.22301054839),Float(93.2972315451603),
            Float(10.0), Float(3.0), Float(1.0), Float(2694.1636998038007),Float(13.007439177501805),
            Float(10.0), Float(4.0), Float(1.0), Float(2694.1636998038007),Float(13.007439177501805),
            Float(10.0), Float(5.0), Float(1.0), Float(46554.28152930668),Float(82.71977328501536),
            Float(10.0), Float(6.0), Float(1.0), Float(29409.697340082446),Float(82.18735472844895),
            Float(11.0), Float(0.0), Float(1.0), Float(48458.24674076813),Float(100.06932829285793),
            Float(11.0), Float(1.0), Float(1.0), Float(57.92316966000593),Float(1.9072427525722235),
            Float(11.0), Float(2.0), Float(1.0), Float(52507.22301054839),Float(93.2972315451603),
            Float(11.0), Float(3.0), Float(1.0), Float(2694.1636998038007),Float(13.007439177501805),
            Float(11.0), Float(4.0), Float(1.0), Float(2694.1636998038007),Float(13.007439177501805),
            Float(11.0), Float(5.0), Float(1.0), Float(46554.28152930668),Float(82.71977328501536),
            Float(11.0), Float(6.0), Float(1.0), Float(29409.697340082446),Float(82.18735472844895),
            Float(12.0), Float(0.0), Float(1.0), Float(48458.24674076813),Float(100.06932829285793),
            Float(12.0), Float(1.0), Float(1.0), Float(57.92316966000593),Float(1.9072427525722235),
            Float(12.0), Float(2.0), Float(1.0), Float(52507.22301054839),Float(93.2972315451603),
            Float(12.0), Float(3.0), Float(1.0), Float(2694.1636998038007),Float(13.007439177501805),
            Float(12.0), Float(4.0), Float(1.0), Float(2694.1636998038007),Float(13.007439177501805),
            Float(12.0), Float(5.0), Float(1.0), Float(46554.28152930668),Float(82.71977328501536),
            Float(12.0), Float(6.0), Float(1.0), Float(29409.697340082446),Float(82.18735472844895),
            Float(13.0), Float(0.0), Float(0.0), Float(537917.8952345883),Float(541.694655317867),
            Float(13.0), Float(1.0), Float(1.0), Float(1386.9862494387492),Float(15.163355243460646),
            Float(13.0), Float(2.0), Float(0.0), Float(563638.8808438728),Float(496.6370574297864),
            Float(13.0), Float(3.0), Float(1.0), Float(36678.08859446906),Float(77.97629201987739),
            Float(13.0), Float(4.0), Float(1.0), Float(36678.08859446906),Float(77.97629201987739),
            Float(13.0), Float(5.0), Float(0.0), Float(499737.0196934157),Float(440.33144515808686),
            Float(13.0), Float(6.0), Float(0.0), Float(350067.84983966866),Float(460.6968647782473),
            Float(14.0), Float(0.0), Float(1.0), Float(48458.24674076813),Float(100.06932829285793),
            Float(14.0), Float(1.0), Float(1.0), Float(57.92316966000593),Float(1.9072427525722235),
            Float(14.0), Float(2.0), Float(1.0), Float(52507.22301054839),Float(93.2972315451603),
            Float(14.0), Float(3.0), Float(1.0), Float(2694.1636998038007),Float(13.007439177501805),
            Float(14.0), Float(4.0), Float(1.0), Float(2694.1636998038007),Float(13.007439177501805),
            Float(14.0), Float(5.0), Float(1.0), Float(46554.28152930668),Float(82.71977328501536),
            Float(14.0), Float(6.0), Float(1.0), Float(29409.697340082446),Float(82.18735472844895),
            Float(15.0), Float(0.0), Float(1.0), Float(48458.24674076813),Float(100.06932829285793),
            Float(15.0), Float(1.0), Float(1.0), Float(57.92316966000593),Float(1.9072427525722235),
            Float(15.0), Float(2.0), Float(1.0), Float(52507.22301054839),Float(93.2972315451603),
            Float(15.0), Float(3.0), Float(1.0), Float(2694.1636998038007),Float(13.007439177501805),
            Float(15.0), Float(4.0), Float(1.0), Float(2694.1636998038007),Float(13.007439177501805),
            Float(15.0), Float(5.0), Float(1.0), Float(46554.28152930668),Float(82.71977328501536),
            Float(15.0), Float(6.0), Float(1.0), Float(29409.697340082446),Float(82.18735472844895),
            Float(16.0), Float(0.0), Float(1.0), Float(48458.24674076813),Float(100.06932829285793),
            Float(16.0), Float(1.0), Float(1.0), Float(57.92316966000593),Float(1.9072427525722235),
            Float(16.0), Float(2.0), Float(1.0), Float(52507.22301054839),Float(93.2972315451603),
            Float(16.0), Float(3.0), Float(1.0), Float(2694.1636998038007),Float(13.007439177501805),
            Float(16.0), Float(4.0), Float(1.0), Float(2694.1636998038007),Float(13.007439177501805),
            Float(16.0), Float(5.0), Float(1.0), Float(46554.28152930668),Float(82.71977328501536),
            Float(16.0), Float(6.0), Float(1.0), Float(29409.697340082446),Float(82.18735472844895),
            Float(17.0), Float(0.0), Float(0.0), Float(476932.11902241065),Float(480.2806936013841),
            Float(17.0), Float(1.0), Float(1.0), Float(1229.738398480471),Float(13.44422859291455),
            Float(17.0), Float(2.0), Float(0.0), Float(499737.0196934157),Float(440.33144515808686),
            Float(17.0), Float(3.0), Float(1.0), Float(32519.755654202738),Float(69.13582633336999),
            Float(17.0), Float(4.0), Float(1.0), Float(32519.755654202738),Float(69.13582633336999),
            Float(17.0), Float(5.0), Float(0.0), Float(443079.95303332224),Float(390.4094120532303),
            Float(17.0), Float(6.0), Float(0.0), Float(310379.3402389799),Float(408.46592740672645),
            Float(18.0), Float(0.0), Float(0.0), Float(327906.40693065047),Float(497.8196081624768),
            Float(18.0), Float(1.0), Float(1.0), Float(554.3838953930165),Float(11.284050674502945),
            Float(18.0), Float(2.0), Float(0.0), Float(350067.84983966866),Float(460.6968647782473),
            Float(18.0), Float(3.0), Float(1.0), Float(19964.76700670687),Float(67.71608603212646),
            Float(18.0), Float(4.0), Float(1.0), Float(19964.76700670687),Float(67.71608603212646),
            Float(18.0), Float(5.0), Float(0.0), Float(310379.3402389799),Float(408.46592740672645),
            Float(18.0), Float(6.0), Float(0.0), Float(205270.1066071238),Float(415.2431626969446)
        )

        val coordsDataTermsInput = Array(
            Float(-0.583), Float(8.501), Float(6.105), Float(-0.4157),Float(-1.207),
            Float(8.145), Float(6.821), Float(0.2719), Float(-0.418),Float(7.755),
            Float(4.854), Float(-0.0518), Float(0.6419751819548327), Float(7.794494012604881),Float(4.602314011895407),
            Float(0.0922), Float(-0.8636097085508152), Float(6.304513843147641), Float(5.0162587329697),Float(-0.1102),
            Float(-0.6968812120646697), Float(5.767263288043691), Float(4.082579211131523), Float(0.0457),Float(-0.2882976086122646),
            Float(5.8360353915771), Float(5.814712819363128), Float(0.0457), Float(-2.3462466443735392),Float(6.266436636432788),
            Float(5.367439374325399), Float(0.3531), Float(-2.5754373225970926), Float(7.067626907082375),Float(6.070053623563108),
            Float(-0.0361), Float(-3.1750208721678046), Float(6.4487477870393946), Float(4.100540434508764),Float(-0.4121),
            Float(-4.235437935486575), Float(6.420351542707189), Float(4.351953053782774), Float(0.1),Float(-2.9353842274166144),
            Float(7.409139167529698), Float(3.645663885572327), Float(0.1), Float(-2.9467730475071123),Float(5.647224379424486),
            Float(3.397933035186036), Float(0.1), Float(-2.6819430162578306), Float(4.921286729218013),Float(6.0051584919812875),
            Float(-0.4121), Float(-3.742608736613624), Float(4.893607627937619), Float(6.257222168488708),Float(0.1),
            Float(-2.453473387997217), Float(4.119151173250518), Float(5.303310090390762), Float(0.1),Float(-2.0908237365507465),
            Float(4.791811155113901), Float(6.911128730382632), Float(0.1), Float(-1.254),Float(8.381),
            Float(3.723), Float(0.5973), Float(-0.8), Float(8.488),Float(2.585),
            Float(-0.5679), Float(15.962), Float(4.687), Float(4.575),Float(-0.4157),
            Float(16.442), Float(5.544), Float(4.784), Float(0.2719),Float(15.812),
            Float(4.312), Float(3.168), Float(-0.0252), Float(16.593),Float(4.806),
            Float(2.581), Float(0.0698), Float(15.944), Float(3.233),Float(3.053),
            Float(0.0698), Float(14.456), Float(4.685), Float(2.557),Float(0.5973),
            Float(14.272), Float(4.47), Float(1.363), Float(-0.5679)
        )

        val solvationTermsInput = Array(
            Float(0.0), Float(3.5), Float(1.6), Float(-1.0046616717745034), Float(0.0), Float(3.5), Float(1.6),Float(-1.0046616717745034),
            Float(0.0), Float(3.5), Float(1.6), Float(-5.114641238124745), Float(2.0), Float(3.5), Float(2.235),Float(0.05869933363176875),
            Float(0.0), Float(3.5), Float(1.6), Float(-3.356483312519363), Float(5.0), Float(3.5), Float(2.1),Float(0.0),
            Float(0.0), Float(3.5), Float(1.6), Float(-2.465987739810145), Float(6.0), Float(3.5), Float(1.6),Float(-0.6603675033573984),
            Float(2.0), Float(3.5), Float(2.365), Float(-0.028220833476811896), Float(0.0), Float(3.5), Float(1.6),Float(-5.411473095694483),
            Float(2.0), Float(3.5), Float(2.365), Float(-0.14366969770013327), Float(2.0), Float(3.5), Float(2.235),Float(0.31617595615293614),
            Float(2.0), Float(3.5), Float(2.365), Float(-0.09428323911571246), Float(5.0), Float(3.5), Float(2.1),Float(0.0),
            Float(2.0), Float(3.5), Float(2.365), Float(-0.06926931853399283), Float(6.0), Float(3.5), Float(1.6),Float(-3.5569795067205314),
            Float(4.0), Float(3.5), Float(2.235), Float(0.05869933363176875), Float(0.0), Float(3.5), Float(1.6),Float(-5.114641238124745),
            Float(4.0), Float(3.5), Float(2.235), Float(0.29883297121627717), Float(2.0), Float(3.5), Float(2.235),Float(0.29883297121627717),
            Float(4.0), Float(3.5), Float(2.235), Float(0.1961091373606819), Float(5.0), Float(3.5), Float(2.1),Float(0.0),
            Float(4.0), Float(3.5), Float(2.235), Float(0.14408018255070507), Float(6.0), Float(3.5), Float(1.6),Float(-3.3618709261831183),
            Float(7.0), Float(3.5), Float(2.365), Float(-0.028220833476811896), Float(0.0), Float(3.5), Float(1.6),Float(-5.411473095694483),
            Float(7.0), Float(3.5), Float(2.365), Float(-0.14366969770013327), Float(2.0), Float(3.5), Float(2.235),Float(0.31617595615293614),
            Float(7.0), Float(3.5), Float(2.365), Float(-0.09428323911571246), Float(5.0), Float(3.5), Float(2.1),Float(0.0),
            Float(7.0), Float(3.5), Float(2.365), Float(-0.06926931853399283), Float(6.0), Float(3.5), Float(1.6),Float(-3.5569795067205314),
            Float(9.0), Float(3.5), Float(2.165), Float(0.16932500086087135), Float(0.0), Float(3.5), Float(1.6),Float(-6.849965943917068),
            Float(9.0), Float(3.5), Float(2.165), Float(0.8620181862007996), Float(2.0), Float(3.5), Float(2.235),Float(0.4002227293075141),
            Float(9.0), Float(3.5), Float(2.165), Float(0.5656994346942747), Float(5.0), Float(3.5), Float(2.1),Float(0.0),
            Float(9.0), Float(3.5), Float(2.165), Float(0.41561591120395697), Float(6.0), Float(3.5), Float(1.6),Float(-4.502505704709534),
            Float(13.0), Float(3.5), Float(2.165), Float(0.16932500086087135), Float(0.0), Float(3.5), Float(1.6),Float(-6.849965943917068),
            Float(13.0), Float(3.5), Float(2.165), Float(0.8620181862007996), Float(2.0), Float(3.5), Float(2.235),Float(0.4002227293075141),
            Float(13.0), Float(3.5), Float(2.165), Float(0.5656994346942747), Float(5.0), Float(3.5), Float(2.1),Float(0.0),
            Float(13.0), Float(3.5), Float(2.165), Float(0.41561591120395697), Float(6.0), Float(3.5), Float(1.6),Float(-4.502505704709534),
            Float(17.0), Float(3.5), Float(2.1), Float(0.0), Float(0.0), Float(3.5), Float(1.6),Float(-3.356483312519363),
            Float(17.0), Float(3.5), Float(2.1), Float(0.0), Float(2.0), Float(3.5), Float(2.235),Float(0.1961091373606819),
            Float(17.0), Float(3.5), Float(2.1), Float(0.0), Float(5.0), Float(3.5), Float(2.1),Float(0.0),
            Float(17.0), Float(3.5), Float(2.1), Float(0.0), Float(6.0), Float(3.5), Float(1.6),Float(-2.2062277953076714),
            Float(18.0), Float(3.5), Float(1.6), Float(-0.6603675033573984), Float(0.0), Float(3.5), Float(1.6),Float(-2.465987739810145),
            Float(18.0), Float(3.5), Float(1.6), Float(-3.3618709261831183), Float(2.0), Float(3.5), Float(2.235),Float(0.14408018255070507),
            Float(18.0), Float(3.5), Float(1.6), Float(-2.2062277953076714), Float(5.0), Float(3.5), Float(2.1),Float(0.0),
            Float(18.0), Float(3.5), Float(1.6), Float(-1.6209020536954324), Float(6.0), Float(3.5), Float(1.6),Float(-1.6209020536954324),
        )

        val halfNonBondedTerms = Array()
        val nonBondedTerms = Array()
        val coordsDataTerms = Array()
        val solvationTerms = Array()
            

        for (x <- 0 until maxHalfNonBonded) {
            if (x < halfNonBondedTermsInput.length) {
                halfNonBondedTerms :+ halfNonBondedTermsInput(x)
            } else {
                halfNonBondedTerms :+ Float(0)
            }
        }

        for (x <- 0 until maxNonBonded) {
            if (x < nonBondedTermsInput.length) {
                nonBondedTerms :+ nonBondedTermsInput(x)
            } else {
                nonBondedTerms :+ Float(0)
            }
        }

        for (x <- 0 until maxData) {
            if (x < coordsDataTermsInput.length) {
                coordsDataTerms :+ coordsDataTermsInput(x)
            } else {
                coordsDataTerms :+ Float(0)
            }
        }

        for (x <- 0 until maxSolvated) {
            if (x < solvationTermsInput.length) {
                solvationTerms :+ solvationTermsInput(x)
            } else {
                solvationTerms :+ Float(0)
            }
        }

        val numberHalfNonBonded = UInt(10)
        val numberNonBonded = UInt(175)
        val res1start = UInt(0)
        val res2start = UInt(76)
        val useHydrogenEs = Bool(true)
        val useHydrogenVdw = Bool(true)
        val distDepDielect = Bool(true)
        val isInternal = Bool(false)
        val solvCutoff = Float(81.0)
        val numberSolvated = UInt(32)
        val forcefield = UInt(1)
        val dielectric = Float(6.0)
        val solvationForcefield = UInt(1)
        val solvScale = Float(0.5)
        val internalSolvEnergy = Float(0.0)
        
        val esEnergy = Float(0.0003810783273974494)
        val vdwEnergy = Float(-0.0008450722111057217)
        val solvEnergy = Float(0)
        

        var timeout =
            10000 // Set a time big enough such that we can handle the case that valid is never high.

        for (i <- 0 until maxHalfNonBonded)
            c.io.halfNonBondedTerms(i).poke(halfNonBondedTerms(i))
        for (i <- 0 until maxNonBonded)
            c.io.nonBondedTerms(i).poke(nonBondedTerms(i))
        for (i <- 0 until maxData)
            c.io.data(i).poke(coordsDataTerms(i))
        for (i <- 0 until maxSolvated)
            c.io.solvationTerms(i).poke(solvationTerms(i))

        c.io.numberHalfNonBonded.poke(numberHalfNonBonded)
        c.io.numberNonBonded.poke(numberNonBonded)
        c.io.numberSolvated.poke(numberSolvated)
        c.io.useHydrogenEs.poke(useHydrogenEs)
        c.io.useHydrogenVdw.poke(useHydrogenVdw)
        c.io.distDepDielect.poke(distDepDielect)
        c.io.toDoSalve.poke(isInternal)
        c.io.res1Start.poke(res1Start)
        c.io.res2Start.poke(res2Start)
        c.io.solvCutoff2.poke(solvCutoff)
        c.io.forcefield.poke(forcefield)
        c.io.dielectric.poke(dielectric)
        c.io.solvationForcefield.poke(solvationForcefield)
        c.io.solvScale.poke(solvScale)
        c.io.internalSolvEnergy.poke(internalSolvEnergy)
        c.io.valid.poke(1)

        do {
            c.clock.step(1)
            c.io.valid.poke(0)
            timeout = timeout - 1
        } while (c.io.done.peekBoolean() == false && timeout > 0)

        assert(timeout != 0, "FAIL - Sha3AccelTest timed out.")

        c.io.done.expect(1)
        c.io.output.expect(esEnergy + vdwEnergy + solvEnergy)
    }
}

