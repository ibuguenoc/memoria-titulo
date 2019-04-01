//
// Generated file, do not edit! Created by nedtool 5.2 from LoRaPhy/LoRaRadioControlInfo.msg.
//

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __INET__PHYSICALLAYER_LORARADIOCONTROLINFO_M_H
#define __INET__PHYSICALLAYER_LORARADIOCONTROLINFO_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0502
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
#include <inet/common/Units.h>
// }}


namespace inet {
namespace physicallayer {

/**
 * Enum generated from <tt>LoRaPhy/LoRaRadioControlInfo.msg:35</tt> by nedtool.
 * <pre>
 * //
 * // Message kinds for sending commands to the radio.
 * //
 * enum LoRaRadioCommandCode
 * {
 * 
 *     LORA_RADIO_C_CONFIGURE = 1;
 * }
 * </pre>
 */
enum LoRaRadioCommandCode {
    LORA_RADIO_C_CONFIGURE = 1
};

/**
 * Class generated from <tt>LoRaPhy/LoRaRadioControlInfo.msg:43</tt> by nedtool.
 * <pre>
 * //
 * // Control info attached to a configure command that is sent to the ~Radio.
 * //
 * class LoRaConfigureRadioCommand
 * {
 *     int radioMode = -1;                  // new radio mode or -1 if not set.
 *     inet::units::values::W power;                    // new default transmission power in the range (0, +infinity) or NaN if not set.
 *     inet::units::values::bps bitrate;              // new default bitrate in the range (0, +infinity) or NaN if not set.
 *     //IModulationPtr modulation = nullptr; // new default modulation or nullptr if not set.
 *     inet::units::values::Hz carrierFrequency;       // new default carrier frequency in the range (0, +infinity) or NaN if not set.
 *     inet::units::values::Hz bandwidth;              // new default bandwidth in the rage (0, +infinity) or NaN if not set.
 * }
 * </pre>
 */
class LoRaConfigureRadioCommand : public ::omnetpp::cObject
{
  protected:
    int radioMode;
    inet::units::values::W power;
    inet::units::values::bps bitrate;
    inet::units::values::Hz carrierFrequency;
    inet::units::values::Hz bandwidth;

  private:
    void copy(const LoRaConfigureRadioCommand& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const LoRaConfigureRadioCommand&);

  public:
    LoRaConfigureRadioCommand();
    LoRaConfigureRadioCommand(const LoRaConfigureRadioCommand& other);
    virtual ~LoRaConfigureRadioCommand();
    LoRaConfigureRadioCommand& operator=(const LoRaConfigureRadioCommand& other);
    virtual LoRaConfigureRadioCommand *dup() const override {return new LoRaConfigureRadioCommand(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getRadioMode() const;
    virtual void setRadioMode(int radioMode);
    virtual inet::units::values::W& getPower();
    virtual const inet::units::values::W& getPower() const {return const_cast<LoRaConfigureRadioCommand*>(this)->getPower();}
    virtual void setPower(const inet::units::values::W& power);
    virtual inet::units::values::bps& getBitrate();
    virtual const inet::units::values::bps& getBitrate() const {return const_cast<LoRaConfigureRadioCommand*>(this)->getBitrate();}
    virtual void setBitrate(const inet::units::values::bps& bitrate);
    virtual inet::units::values::Hz& getCarrierFrequency();
    virtual const inet::units::values::Hz& getCarrierFrequency() const {return const_cast<LoRaConfigureRadioCommand*>(this)->getCarrierFrequency();}
    virtual void setCarrierFrequency(const inet::units::values::Hz& carrierFrequency);
    virtual inet::units::values::Hz& getBandwidth();
    virtual const inet::units::values::Hz& getBandwidth() const {return const_cast<LoRaConfigureRadioCommand*>(this)->getBandwidth();}
    virtual void setBandwidth(const inet::units::values::Hz& bandwidth);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const LoRaConfigureRadioCommand& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, LoRaConfigureRadioCommand& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>LoRaPhy/LoRaRadioControlInfo.msg:56</tt> by nedtool.
 * <pre>
 * //
 * // Control info attached to a mac frame that is sent down to the ~Radio.
 * //
 * class LoRaTransmissionRequest
 * {
 *     inet::units::values::W power;              // override default transmission power in the range (0, +infinity) or NaN if not set.
 *     inet::units::values::bps bitrate;        // override default bitrate in the range (0, +infinity) or NaN if not set.
 *     inet::units::values::Hz carrierFrequency; // override default carrier frequency in the range (0, +infinity) or NaN if not set.
 *     inet::units::values::Hz bandwidth;        // override default bandwidth in the rage (0, +infinity) or NaN if not set.
 * }
 * </pre>
 */
class LoRaTransmissionRequest : public ::omnetpp::cObject
{
  protected:
    inet::units::values::W power;
    inet::units::values::bps bitrate;
    inet::units::values::Hz carrierFrequency;
    inet::units::values::Hz bandwidth;

  private:
    void copy(const LoRaTransmissionRequest& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const LoRaTransmissionRequest&);

  public:
    LoRaTransmissionRequest();
    LoRaTransmissionRequest(const LoRaTransmissionRequest& other);
    virtual ~LoRaTransmissionRequest();
    LoRaTransmissionRequest& operator=(const LoRaTransmissionRequest& other);
    virtual LoRaTransmissionRequest *dup() const override {return new LoRaTransmissionRequest(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual inet::units::values::W& getPower();
    virtual const inet::units::values::W& getPower() const {return const_cast<LoRaTransmissionRequest*>(this)->getPower();}
    virtual void setPower(const inet::units::values::W& power);
    virtual inet::units::values::bps& getBitrate();
    virtual const inet::units::values::bps& getBitrate() const {return const_cast<LoRaTransmissionRequest*>(this)->getBitrate();}
    virtual void setBitrate(const inet::units::values::bps& bitrate);
    virtual inet::units::values::Hz& getCarrierFrequency();
    virtual const inet::units::values::Hz& getCarrierFrequency() const {return const_cast<LoRaTransmissionRequest*>(this)->getCarrierFrequency();}
    virtual void setCarrierFrequency(const inet::units::values::Hz& carrierFrequency);
    virtual inet::units::values::Hz& getBandwidth();
    virtual const inet::units::values::Hz& getBandwidth() const {return const_cast<LoRaTransmissionRequest*>(this)->getBandwidth();}
    virtual void setBandwidth(const inet::units::values::Hz& bandwidth);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const LoRaTransmissionRequest& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, LoRaTransmissionRequest& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>LoRaPhy/LoRaRadioControlInfo.msg:67</tt> by nedtool.
 * <pre>
 * //
 * // Control info attached to a mac frame that is sent up from the ~Radio.
 * //
 * class LoRaReceptionIndication
 * {
 *     //int bitErrorCount = -1;       // number of erroneous bits in the range [0, +infinity) or -1 if unknown.
 *     //int symbolErrorCount = -1;    // number of erroneous symbols in the range [0, +infinity) or -1 if unknown.
 *     //double packetErrorRate = NaN; // packet error rate (probability) in the range [0, 1] or NaN if unknown.
 *     //double bitErrorRate = NaN;    // bit error rate (probability) in the range [0, 1] or NaN if unknown.
 *     //double symbolErrorRate = NaN; // symbol error rate (probability) in the range [0, 1] or NaN if unknown.
 *     inet::units::values::W minRSSI;           // minimum receive signal strength indication in the range (0, +infinity) or NaN if unknown.
 *     double minSNIR;         // minimum signal to noise plus interference ratio in the range (0, +infinity) or NaN if unknown.
 *     inet::units::values::W LoRaTP;
 *     inet::units::values::Hz LoRaCF;
 *     int LoRaSF;
 *     inet::units::values::Hz LoRaBW;
 *     int LoRaCR;
 * }
 * </pre>
 */
class LoRaReceptionIndication : public ::omnetpp::cObject
{
  protected:
    inet::units::values::W minRSSI;
    double minSNIR;
    inet::units::values::W LoRaTP;
    inet::units::values::Hz LoRaCF;
    int LoRaSF;
    inet::units::values::Hz LoRaBW;
    int LoRaCR;

  private:
    void copy(const LoRaReceptionIndication& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const LoRaReceptionIndication&);

  public:
    LoRaReceptionIndication();
    LoRaReceptionIndication(const LoRaReceptionIndication& other);
    virtual ~LoRaReceptionIndication();
    LoRaReceptionIndication& operator=(const LoRaReceptionIndication& other);
    virtual LoRaReceptionIndication *dup() const override {return new LoRaReceptionIndication(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual inet::units::values::W& getMinRSSI();
    virtual const inet::units::values::W& getMinRSSI() const {return const_cast<LoRaReceptionIndication*>(this)->getMinRSSI();}
    virtual void setMinRSSI(const inet::units::values::W& minRSSI);
    virtual double getMinSNIR() const;
    virtual void setMinSNIR(double minSNIR);
    virtual inet::units::values::W& getLoRaTP();
    virtual const inet::units::values::W& getLoRaTP() const {return const_cast<LoRaReceptionIndication*>(this)->getLoRaTP();}
    virtual void setLoRaTP(const inet::units::values::W& LoRaTP);
    virtual inet::units::values::Hz& getLoRaCF();
    virtual const inet::units::values::Hz& getLoRaCF() const {return const_cast<LoRaReceptionIndication*>(this)->getLoRaCF();}
    virtual void setLoRaCF(const inet::units::values::Hz& LoRaCF);
    virtual int getLoRaSF() const;
    virtual void setLoRaSF(int LoRaSF);
    virtual inet::units::values::Hz& getLoRaBW();
    virtual const inet::units::values::Hz& getLoRaBW() const {return const_cast<LoRaReceptionIndication*>(this)->getLoRaBW();}
    virtual void setLoRaBW(const inet::units::values::Hz& LoRaBW);
    virtual int getLoRaCR() const;
    virtual void setLoRaCR(int LoRaCR);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const LoRaReceptionIndication& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, LoRaReceptionIndication& obj) {obj.parsimUnpack(b);}

} // namespace physicallayer
} // namespace inet

#endif // ifndef __INET__PHYSICALLAYER_LORARADIOCONTROLINFO_M_H

