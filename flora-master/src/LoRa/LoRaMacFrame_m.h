//
// Generated file, do not edit! Created by nedtool 5.2 from LoRa/LoRaMacFrame.msg.
//

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __INET_LORAMACFRAME_M_H
#define __INET_LORAMACFRAME_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0502
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
#include "../misc/DevAddr.h"
#include <inet/common/Units.h>
// }}


namespace inet {

/**
 * Class generated from <tt>LoRa/LoRaMacFrame.msg:31</tt> by nedtool.
 * <pre>
 * packet LoRaMacFrame
 * {
 *     DevAddr transmitterAddress;
 *     DevAddr receiverAddress;
 * 
 *     simtime_t simSendNodeTime;
 *     int sequenceNumber;
 *     double LoRaTP;
 *     inet::units::values::Hz LoRaCF;
 *     int LoRaSF;
 *     inet::units::values::Hz LoRaBW;
 *     int LoRaCR;
 *     bool LoRaUseHeader;
 *     double RSSI;
 *     double SNIR;
 * 
 * }
 * </pre>
 */
class LoRaMacFrame : public ::omnetpp::cPacket
{
  protected:
    DevAddr transmitterAddress;
    DevAddr receiverAddress;
    ::omnetpp::simtime_t simSendNodeTime;
    int sequenceNumber;
    double LoRaTP;
    inet::units::values::Hz LoRaCF;
    int LoRaSF;
    inet::units::values::Hz LoRaBW;
    int LoRaCR;
    bool LoRaUseHeader;
    double RSSI;
    double SNIR;

  private:
    void copy(const LoRaMacFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const LoRaMacFrame&);

  public:
    LoRaMacFrame(const char *name=nullptr, short kind=0);
    LoRaMacFrame(const LoRaMacFrame& other);
    virtual ~LoRaMacFrame();
    LoRaMacFrame& operator=(const LoRaMacFrame& other);
    virtual LoRaMacFrame *dup() const override {return new LoRaMacFrame(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual DevAddr& getTransmitterAddress();
    virtual const DevAddr& getTransmitterAddress() const {return const_cast<LoRaMacFrame*>(this)->getTransmitterAddress();}
    virtual void setTransmitterAddress(const DevAddr& transmitterAddress);
    virtual DevAddr& getReceiverAddress();
    virtual const DevAddr& getReceiverAddress() const {return const_cast<LoRaMacFrame*>(this)->getReceiverAddress();}
    virtual void setReceiverAddress(const DevAddr& receiverAddress);
    virtual ::omnetpp::simtime_t getSimSendNodeTime() const;
    virtual void setSimSendNodeTime(::omnetpp::simtime_t simSendNodeTime);
    virtual int getSequenceNumber() const;
    virtual void setSequenceNumber(int sequenceNumber);
    virtual double getLoRaTP() const;
    virtual void setLoRaTP(double LoRaTP);
    virtual inet::units::values::Hz& getLoRaCF();
    virtual const inet::units::values::Hz& getLoRaCF() const {return const_cast<LoRaMacFrame*>(this)->getLoRaCF();}
    virtual void setLoRaCF(const inet::units::values::Hz& LoRaCF);
    virtual int getLoRaSF() const;
    virtual void setLoRaSF(int LoRaSF);
    virtual inet::units::values::Hz& getLoRaBW();
    virtual const inet::units::values::Hz& getLoRaBW() const {return const_cast<LoRaMacFrame*>(this)->getLoRaBW();}
    virtual void setLoRaBW(const inet::units::values::Hz& LoRaBW);
    virtual int getLoRaCR() const;
    virtual void setLoRaCR(int LoRaCR);
    virtual bool getLoRaUseHeader() const;
    virtual void setLoRaUseHeader(bool LoRaUseHeader);
    virtual double getRSSI() const;
    virtual void setRSSI(double RSSI);
    virtual double getSNIR() const;
    virtual void setSNIR(double SNIR);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const LoRaMacFrame& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, LoRaMacFrame& obj) {obj.parsimUnpack(b);}

} // namespace inet

#endif // ifndef __INET_LORAMACFRAME_M_H

