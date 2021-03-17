type t =
  | OrderCharge({order_id: int, transaction_details: TransactionEntity.t})
  | MigrationCharge(TransactionEntity.t)