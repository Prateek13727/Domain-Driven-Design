
type t = {
  wallet_usage_level: CashWalletUsageLevel.t,
  wallet_balance: WalletBalance.t,
  last_recharge_event: option(RechargeEvent.t),
}